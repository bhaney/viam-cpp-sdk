// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: component/audioinput/v1/audioinput.proto

#include "component/audioinput/v1/audioinput.pb.h"
#include "component/audioinput/v1/audioinput.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace viam {
namespace component {
namespace audioinput {
namespace v1 {

static const char* AudioInputService_method_names[] = {
  "/viam.component.audioinput.v1.AudioInputService/Chunks",
  "/viam.component.audioinput.v1.AudioInputService/Properties",
  "/viam.component.audioinput.v1.AudioInputService/Record",
};

std::unique_ptr< AudioInputService::Stub> AudioInputService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AudioInputService::Stub> stub(new AudioInputService::Stub(channel, options));
  return stub;
}

AudioInputService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Chunks_(AudioInputService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Properties_(AudioInputService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Record_(AudioInputService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::viam::component::audioinput::v1::ChunksResponse>* AudioInputService::Stub::ChunksRaw(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::ChunksRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::viam::component::audioinput::v1::ChunksResponse>::Create(channel_.get(), rpcmethod_Chunks_, context, request);
}

void AudioInputService::Stub::async::Chunks(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::ChunksRequest* request, ::grpc::ClientReadReactor< ::viam::component::audioinput::v1::ChunksResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::viam::component::audioinput::v1::ChunksResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_Chunks_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::viam::component::audioinput::v1::ChunksResponse>* AudioInputService::Stub::AsyncChunksRaw(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::ChunksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::viam::component::audioinput::v1::ChunksResponse>::Create(channel_.get(), cq, rpcmethod_Chunks_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::viam::component::audioinput::v1::ChunksResponse>* AudioInputService::Stub::PrepareAsyncChunksRaw(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::ChunksRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::viam::component::audioinput::v1::ChunksResponse>::Create(channel_.get(), cq, rpcmethod_Chunks_, context, request, false, nullptr);
}

::grpc::Status AudioInputService::Stub::Properties(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::PropertiesRequest& request, ::viam::component::audioinput::v1::PropertiesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::component::audioinput::v1::PropertiesRequest, ::viam::component::audioinput::v1::PropertiesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Properties_, context, request, response);
}

void AudioInputService::Stub::async::Properties(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::PropertiesRequest* request, ::viam::component::audioinput::v1::PropertiesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::component::audioinput::v1::PropertiesRequest, ::viam::component::audioinput::v1::PropertiesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Properties_, context, request, response, std::move(f));
}

void AudioInputService::Stub::async::Properties(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::PropertiesRequest* request, ::viam::component::audioinput::v1::PropertiesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Properties_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::component::audioinput::v1::PropertiesResponse>* AudioInputService::Stub::PrepareAsyncPropertiesRaw(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::PropertiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::component::audioinput::v1::PropertiesResponse, ::viam::component::audioinput::v1::PropertiesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Properties_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::component::audioinput::v1::PropertiesResponse>* AudioInputService::Stub::AsyncPropertiesRaw(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::PropertiesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPropertiesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status AudioInputService::Stub::Record(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::RecordRequest& request, ::google::api::HttpBody* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::component::audioinput::v1::RecordRequest, ::google::api::HttpBody, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Record_, context, request, response);
}

void AudioInputService::Stub::async::Record(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::RecordRequest* request, ::google::api::HttpBody* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::component::audioinput::v1::RecordRequest, ::google::api::HttpBody, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Record_, context, request, response, std::move(f));
}

void AudioInputService::Stub::async::Record(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::RecordRequest* request, ::google::api::HttpBody* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Record_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::api::HttpBody>* AudioInputService::Stub::PrepareAsyncRecordRaw(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::RecordRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::api::HttpBody, ::viam::component::audioinput::v1::RecordRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Record_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::api::HttpBody>* AudioInputService::Stub::AsyncRecordRaw(::grpc::ClientContext* context, const ::viam::component::audioinput::v1::RecordRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRecordRaw(context, request, cq);
  result->StartCall();
  return result;
}

AudioInputService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AudioInputService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< AudioInputService::Service, ::viam::component::audioinput::v1::ChunksRequest, ::viam::component::audioinput::v1::ChunksResponse>(
          [](AudioInputService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::component::audioinput::v1::ChunksRequest* req,
             ::grpc::ServerWriter<::viam::component::audioinput::v1::ChunksResponse>* writer) {
               return service->Chunks(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AudioInputService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AudioInputService::Service, ::viam::component::audioinput::v1::PropertiesRequest, ::viam::component::audioinput::v1::PropertiesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](AudioInputService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::component::audioinput::v1::PropertiesRequest* req,
             ::viam::component::audioinput::v1::PropertiesResponse* resp) {
               return service->Properties(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AudioInputService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AudioInputService::Service, ::viam::component::audioinput::v1::RecordRequest, ::google::api::HttpBody, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](AudioInputService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::component::audioinput::v1::RecordRequest* req,
             ::google::api::HttpBody* resp) {
               return service->Record(ctx, req, resp);
             }, this)));
}

AudioInputService::Service::~Service() {
}

::grpc::Status AudioInputService::Service::Chunks(::grpc::ServerContext* context, const ::viam::component::audioinput::v1::ChunksRequest* request, ::grpc::ServerWriter< ::viam::component::audioinput::v1::ChunksResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AudioInputService::Service::Properties(::grpc::ServerContext* context, const ::viam::component::audioinput::v1::PropertiesRequest* request, ::viam::component::audioinput::v1::PropertiesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AudioInputService::Service::Record(::grpc::ServerContext* context, const ::viam::component::audioinput::v1::RecordRequest* request, ::google::api::HttpBody* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace viam
}  // namespace component
}  // namespace audioinput
}  // namespace v1
