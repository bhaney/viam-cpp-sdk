// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/rpc/webrtc/v1/signaling.proto

#include "proto/rpc/webrtc/v1/signaling.pb.h"
#include "proto/rpc/webrtc/v1/signaling.grpc.pb.h"

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
namespace proto {
namespace rpc {
namespace webrtc {
namespace v1 {

static const char* SignalingService_method_names[] = {
  "/proto.rpc.webrtc.v1.SignalingService/Call",
  "/proto.rpc.webrtc.v1.SignalingService/CallUpdate",
  "/proto.rpc.webrtc.v1.SignalingService/Answer",
  "/proto.rpc.webrtc.v1.SignalingService/OptionalWebRTCConfig",
};

std::unique_ptr< SignalingService::Stub> SignalingService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SignalingService::Stub> stub(new SignalingService::Stub(channel, options));
  return stub;
}

SignalingService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Call_(SignalingService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_CallUpdate_(SignalingService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Answer_(SignalingService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_OptionalWebRTCConfig_(SignalingService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::proto::rpc::webrtc::v1::CallResponse>* SignalingService::Stub::CallRaw(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::proto::rpc::webrtc::v1::CallResponse>::Create(channel_.get(), rpcmethod_Call_, context, request);
}

void SignalingService::Stub::async::Call(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallRequest* request, ::grpc::ClientReadReactor< ::proto::rpc::webrtc::v1::CallResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::proto::rpc::webrtc::v1::CallResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_Call_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::proto::rpc::webrtc::v1::CallResponse>* SignalingService::Stub::AsyncCallRaw(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::proto::rpc::webrtc::v1::CallResponse>::Create(channel_.get(), cq, rpcmethod_Call_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::proto::rpc::webrtc::v1::CallResponse>* SignalingService::Stub::PrepareAsyncCallRaw(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::proto::rpc::webrtc::v1::CallResponse>::Create(channel_.get(), cq, rpcmethod_Call_, context, request, false, nullptr);
}

::grpc::Status SignalingService::Stub::CallUpdate(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallUpdateRequest& request, ::proto::rpc::webrtc::v1::CallUpdateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::proto::rpc::webrtc::v1::CallUpdateRequest, ::proto::rpc::webrtc::v1::CallUpdateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CallUpdate_, context, request, response);
}

void SignalingService::Stub::async::CallUpdate(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallUpdateRequest* request, ::proto::rpc::webrtc::v1::CallUpdateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::proto::rpc::webrtc::v1::CallUpdateRequest, ::proto::rpc::webrtc::v1::CallUpdateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CallUpdate_, context, request, response, std::move(f));
}

void SignalingService::Stub::async::CallUpdate(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallUpdateRequest* request, ::proto::rpc::webrtc::v1::CallUpdateResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CallUpdate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::proto::rpc::webrtc::v1::CallUpdateResponse>* SignalingService::Stub::PrepareAsyncCallUpdateRaw(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallUpdateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::proto::rpc::webrtc::v1::CallUpdateResponse, ::proto::rpc::webrtc::v1::CallUpdateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CallUpdate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::proto::rpc::webrtc::v1::CallUpdateResponse>* SignalingService::Stub::AsyncCallUpdateRaw(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::CallUpdateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCallUpdateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReaderWriter< ::proto::rpc::webrtc::v1::AnswerResponse, ::proto::rpc::webrtc::v1::AnswerRequest>* SignalingService::Stub::AnswerRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::proto::rpc::webrtc::v1::AnswerResponse, ::proto::rpc::webrtc::v1::AnswerRequest>::Create(channel_.get(), rpcmethod_Answer_, context);
}

void SignalingService::Stub::async::Answer(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::proto::rpc::webrtc::v1::AnswerResponse,::proto::rpc::webrtc::v1::AnswerRequest>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::proto::rpc::webrtc::v1::AnswerResponse,::proto::rpc::webrtc::v1::AnswerRequest>::Create(stub_->channel_.get(), stub_->rpcmethod_Answer_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::proto::rpc::webrtc::v1::AnswerResponse, ::proto::rpc::webrtc::v1::AnswerRequest>* SignalingService::Stub::AsyncAnswerRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::proto::rpc::webrtc::v1::AnswerResponse, ::proto::rpc::webrtc::v1::AnswerRequest>::Create(channel_.get(), cq, rpcmethod_Answer_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::proto::rpc::webrtc::v1::AnswerResponse, ::proto::rpc::webrtc::v1::AnswerRequest>* SignalingService::Stub::PrepareAsyncAnswerRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::proto::rpc::webrtc::v1::AnswerResponse, ::proto::rpc::webrtc::v1::AnswerRequest>::Create(channel_.get(), cq, rpcmethod_Answer_, context, false, nullptr);
}

::grpc::Status SignalingService::Stub::OptionalWebRTCConfig(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest& request, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_OptionalWebRTCConfig_, context, request, response);
}

void SignalingService::Stub::async::OptionalWebRTCConfig(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest* request, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_OptionalWebRTCConfig_, context, request, response, std::move(f));
}

void SignalingService::Stub::async::OptionalWebRTCConfig(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest* request, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_OptionalWebRTCConfig_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse>* SignalingService::Stub::PrepareAsyncOptionalWebRTCConfigRaw(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_OptionalWebRTCConfig_, context, request);
}

::grpc::ClientAsyncResponseReader< ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse>* SignalingService::Stub::AsyncOptionalWebRTCConfigRaw(::grpc::ClientContext* context, const ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncOptionalWebRTCConfigRaw(context, request, cq);
  result->StartCall();
  return result;
}

SignalingService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SignalingService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< SignalingService::Service, ::proto::rpc::webrtc::v1::CallRequest, ::proto::rpc::webrtc::v1::CallResponse>(
          [](SignalingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::proto::rpc::webrtc::v1::CallRequest* req,
             ::grpc::ServerWriter<::proto::rpc::webrtc::v1::CallResponse>* writer) {
               return service->Call(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SignalingService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SignalingService::Service, ::proto::rpc::webrtc::v1::CallUpdateRequest, ::proto::rpc::webrtc::v1::CallUpdateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SignalingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::proto::rpc::webrtc::v1::CallUpdateRequest* req,
             ::proto::rpc::webrtc::v1::CallUpdateResponse* resp) {
               return service->CallUpdate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SignalingService_method_names[2],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< SignalingService::Service, ::proto::rpc::webrtc::v1::AnswerResponse, ::proto::rpc::webrtc::v1::AnswerRequest>(
          [](SignalingService::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::proto::rpc::webrtc::v1::AnswerRequest,
             ::proto::rpc::webrtc::v1::AnswerResponse>* stream) {
               return service->Answer(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SignalingService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SignalingService::Service, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SignalingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest* req,
             ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse* resp) {
               return service->OptionalWebRTCConfig(ctx, req, resp);
             }, this)));
}

SignalingService::Service::~Service() {
}

::grpc::Status SignalingService::Service::Call(::grpc::ServerContext* context, const ::proto::rpc::webrtc::v1::CallRequest* request, ::grpc::ServerWriter< ::proto::rpc::webrtc::v1::CallResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SignalingService::Service::CallUpdate(::grpc::ServerContext* context, const ::proto::rpc::webrtc::v1::CallUpdateRequest* request, ::proto::rpc::webrtc::v1::CallUpdateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SignalingService::Service::Answer(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::proto::rpc::webrtc::v1::AnswerRequest, ::proto::rpc::webrtc::v1::AnswerResponse>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SignalingService::Service::OptionalWebRTCConfig(::grpc::ServerContext* context, const ::proto::rpc::webrtc::v1::OptionalWebRTCConfigRequest* request, ::proto::rpc::webrtc::v1::OptionalWebRTCConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace proto
}  // namespace rpc
}  // namespace webrtc
}  // namespace v1
