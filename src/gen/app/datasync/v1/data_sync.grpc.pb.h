// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: app/datasync/v1/data_sync.proto
#ifndef GRPC_app_2fdatasync_2fv1_2fdata_5fsync_2eproto__INCLUDED
#define GRPC_app_2fdatasync_2fv1_2fdata_5fsync_2eproto__INCLUDED

#include "app/datasync/v1/data_sync.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace viam {
namespace app {
namespace datasync {
namespace v1 {

class DataSyncService final {
 public:
  static constexpr char const* service_full_name() {
    return "viam.app.datasync.v1.DataSyncService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>> Upload(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>>(UploadRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>> AsyncUpload(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>>(AsyncUploadRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>> PrepareAsyncUpload(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>>(PrepareAsyncUploadRaw(context, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Upload(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::viam::app::datasync::v1::UploadRequest,::viam::app::datasync::v1::UploadResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>* UploadRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>* AsyncUploadRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>* PrepareAsyncUploadRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>> Upload(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>>(UploadRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>> AsyncUpload(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>>(AsyncUploadRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>> PrepareAsyncUpload(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>>(PrepareAsyncUploadRaw(context, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Upload(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::viam::app::datasync::v1::UploadRequest,::viam::app::datasync::v1::UploadResponse>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>* UploadRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>* AsyncUploadRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>* PrepareAsyncUploadRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Upload_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Upload(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::viam::app::datasync::v1::UploadResponse, ::viam::app::datasync::v1::UploadRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_Upload : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Upload() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Upload() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Upload(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::app::datasync::v1::UploadResponse, ::viam::app::datasync::v1::UploadRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpload(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::viam::app::datasync::v1::UploadResponse, ::viam::app::datasync::v1::UploadRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Upload<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Upload : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Upload() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->Upload(context); }));
    }
    ~WithCallbackMethod_Upload() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Upload(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::app::datasync::v1::UploadResponse, ::viam::app::datasync::v1::UploadRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::viam::app::datasync::v1::UploadRequest, ::viam::app::datasync::v1::UploadResponse>* Upload(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef WithCallbackMethod_Upload<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Upload : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Upload() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Upload() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Upload(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::app::datasync::v1::UploadResponse, ::viam::app::datasync::v1::UploadRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Upload : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Upload() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Upload() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Upload(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::app::datasync::v1::UploadResponse, ::viam::app::datasync::v1::UploadRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpload(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Upload : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Upload() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->Upload(context); }));
    }
    ~WithRawCallbackMethod_Upload() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Upload(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::app::datasync::v1::UploadResponse, ::viam::app::datasync::v1::UploadRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* Upload(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace v1
}  // namespace datasync
}  // namespace app
}  // namespace viam


#endif  // GRPC_app_2fdatasync_2fv1_2fdata_5fsync_2eproto__INCLUDED