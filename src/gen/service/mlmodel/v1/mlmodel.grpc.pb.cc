// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: service/mlmodel/v1/mlmodel.proto

#include "service/mlmodel/v1/mlmodel.pb.h"
#include "service/mlmodel/v1/mlmodel.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace viam {
namespace service {
namespace mlmodel {
namespace v1 {

static const char* MLModelService_method_names[] = {
  "/viam.service.mlmodel.v1.MLModelService/Infer",
  "/viam.service.mlmodel.v1.MLModelService/Metadata",
};

std::unique_ptr< MLModelService::Stub> MLModelService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MLModelService::Stub> stub(new MLModelService::Stub(channel, options));
  return stub;
}

MLModelService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Infer_(MLModelService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Metadata_(MLModelService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MLModelService::Stub::Infer(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::InferRequest& request, ::viam::service::mlmodel::v1::InferResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::service::mlmodel::v1::InferRequest, ::viam::service::mlmodel::v1::InferResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Infer_, context, request, response);
}

void MLModelService::Stub::async::Infer(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::InferRequest* request, ::viam::service::mlmodel::v1::InferResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::service::mlmodel::v1::InferRequest, ::viam::service::mlmodel::v1::InferResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Infer_, context, request, response, std::move(f));
}

void MLModelService::Stub::async::Infer(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::InferRequest* request, ::viam::service::mlmodel::v1::InferResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Infer_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::service::mlmodel::v1::InferResponse>* MLModelService::Stub::PrepareAsyncInferRaw(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::InferRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::service::mlmodel::v1::InferResponse, ::viam::service::mlmodel::v1::InferRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Infer_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::service::mlmodel::v1::InferResponse>* MLModelService::Stub::AsyncInferRaw(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::InferRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncInferRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MLModelService::Stub::Metadata(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::MetadataRequest& request, ::viam::service::mlmodel::v1::MetadataResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::service::mlmodel::v1::MetadataRequest, ::viam::service::mlmodel::v1::MetadataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Metadata_, context, request, response);
}

void MLModelService::Stub::async::Metadata(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::MetadataRequest* request, ::viam::service::mlmodel::v1::MetadataResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::service::mlmodel::v1::MetadataRequest, ::viam::service::mlmodel::v1::MetadataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Metadata_, context, request, response, std::move(f));
}

void MLModelService::Stub::async::Metadata(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::MetadataRequest* request, ::viam::service::mlmodel::v1::MetadataResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Metadata_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::service::mlmodel::v1::MetadataResponse>* MLModelService::Stub::PrepareAsyncMetadataRaw(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::MetadataRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::service::mlmodel::v1::MetadataResponse, ::viam::service::mlmodel::v1::MetadataRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Metadata_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::service::mlmodel::v1::MetadataResponse>* MLModelService::Stub::AsyncMetadataRaw(::grpc::ClientContext* context, const ::viam::service::mlmodel::v1::MetadataRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMetadataRaw(context, request, cq);
  result->StartCall();
  return result;
}

MLModelService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MLModelService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MLModelService::Service, ::viam::service::mlmodel::v1::InferRequest, ::viam::service::mlmodel::v1::InferResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](MLModelService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::service::mlmodel::v1::InferRequest* req,
             ::viam::service::mlmodel::v1::InferResponse* resp) {
               return service->Infer(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MLModelService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MLModelService::Service, ::viam::service::mlmodel::v1::MetadataRequest, ::viam::service::mlmodel::v1::MetadataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](MLModelService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::service::mlmodel::v1::MetadataRequest* req,
             ::viam::service::mlmodel::v1::MetadataResponse* resp) {
               return service->Metadata(ctx, req, resp);
             }, this)));
}

MLModelService::Service::~Service() {
}

::grpc::Status MLModelService::Service::Infer(::grpc::ServerContext* context, const ::viam::service::mlmodel::v1::InferRequest* request, ::viam::service::mlmodel::v1::InferResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MLModelService::Service::Metadata(::grpc::ServerContext* context, const ::viam::service::mlmodel::v1::MetadataRequest* request, ::viam::service::mlmodel::v1::MetadataResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace viam
}  // namespace service
}  // namespace mlmodel
}  // namespace v1

