// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: service/shell/v1/shell.proto
#ifndef GRPC_service_2fshell_2fv1_2fshell_2eproto__INCLUDED
#define GRPC_service_2fshell_2fv1_2fshell_2eproto__INCLUDED

#include "service/shell/v1/shell.pb.h"

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
namespace service {
namespace shell {
namespace v1 {

// A ShellService service allows access to an interactive shell experience.
class ShellService final {
 public:
  static constexpr char const* service_full_name() {
    return "viam.service.shell.v1.ShellService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Shell starts a shell with an input and output pipe.
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>> Shell(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>>(ShellRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>> AsyncShell(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>>(AsyncShellRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>> PrepareAsyncShell(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>>(PrepareAsyncShellRaw(context, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Shell starts a shell with an input and output pipe.
      virtual void Shell(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::viam::service::shell::v1::ShellRequest,::viam::service::shell::v1::ShellResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>* ShellRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>* AsyncShellRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>* PrepareAsyncShellRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>> Shell(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>>(ShellRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>> AsyncShell(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>>(AsyncShellRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>> PrepareAsyncShell(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>>(PrepareAsyncShellRaw(context, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Shell(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::viam::service::shell::v1::ShellRequest,::viam::service::shell::v1::ShellResponse>* reactor) override;
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
    ::grpc::ClientReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>* ShellRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>* AsyncShellRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>* PrepareAsyncShellRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Shell_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Shell starts a shell with an input and output pipe.
    virtual ::grpc::Status Shell(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::viam::service::shell::v1::ShellResponse, ::viam::service::shell::v1::ShellRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_Shell : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Shell() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Shell() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shell(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::service::shell::v1::ShellResponse, ::viam::service::shell::v1::ShellRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestShell(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::viam::service::shell::v1::ShellResponse, ::viam::service::shell::v1::ShellRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Shell<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Shell : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Shell() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->Shell(context); }));
    }
    ~WithCallbackMethod_Shell() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shell(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::service::shell::v1::ShellResponse, ::viam::service::shell::v1::ShellRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::viam::service::shell::v1::ShellRequest, ::viam::service::shell::v1::ShellResponse>* Shell(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef WithCallbackMethod_Shell<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Shell : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Shell() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Shell() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shell(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::service::shell::v1::ShellResponse, ::viam::service::shell::v1::ShellRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Shell : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Shell() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Shell() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shell(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::service::shell::v1::ShellResponse, ::viam::service::shell::v1::ShellRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestShell(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Shell : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Shell() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->Shell(context); }));
    }
    ~WithRawCallbackMethod_Shell() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shell(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::viam::service::shell::v1::ShellResponse, ::viam::service::shell::v1::ShellRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* Shell(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace v1
}  // namespace shell
}  // namespace service
}  // namespace viam


#endif  // GRPC_service_2fshell_2fv1_2fshell_2eproto__INCLUDED