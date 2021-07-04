// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow_serving/apis/model_service.proto
#ifndef GRPC_tensorflow_5fserving_2fapis_2fmodel_5fservice_2eproto__INCLUDED
#define GRPC_tensorflow_5fserving_2fapis_2fmodel_5fservice_2eproto__INCLUDED

#include "tensorflow_serving/apis/model_service.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
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

namespace tensorflow {
namespace serving {

// ModelService provides methods to query and update the state of the server,
// e.g. which models/versions are being served.
class ModelService final {
 public:
  static constexpr char const* service_full_name() {
    return "tensorflow.serving.ModelService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Gets status of model. If the ModelSpec in the request does not specify
    // version, information about all versions of the model will be returned. If
    // the ModelSpec in the request does specify a version, the status of only
    // that version will be returned.
    virtual ::grpc::Status GetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::tensorflow::serving::GetModelStatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::GetModelStatusResponse>> AsyncGetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::GetModelStatusResponse>>(AsyncGetModelStatusRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::GetModelStatusResponse>> PrepareAsyncGetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::GetModelStatusResponse>>(PrepareAsyncGetModelStatusRaw(context, request, cq));
    }
    // Reloads the set of served models. The new config supersedes the old one,
    // so if a model is omitted from the new config it will be unloaded and no
    // longer served.
    virtual ::grpc::Status HandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::tensorflow::serving::ReloadConfigResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::ReloadConfigResponse>> AsyncHandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::ReloadConfigResponse>>(AsyncHandleReloadConfigRequestRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::ReloadConfigResponse>> PrepareAsyncHandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::ReloadConfigResponse>>(PrepareAsyncHandleReloadConfigRequestRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Gets status of model. If the ModelSpec in the request does not specify
      // version, information about all versions of the model will be returned. If
      // the ModelSpec in the request does specify a version, the status of only
      // that version will be returned.
      virtual void GetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest* request, ::tensorflow::serving::GetModelStatusResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest* request, ::tensorflow::serving::GetModelStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest* request, ::tensorflow::serving::GetModelStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      // Reloads the set of served models. The new config supersedes the old one,
      // so if a model is omitted from the new config it will be unloaded and no
      // longer served.
      virtual void HandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest* request, ::tensorflow::serving::ReloadConfigResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void HandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest* request, ::tensorflow::serving::ReloadConfigResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void HandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest* request, ::tensorflow::serving::ReloadConfigResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::GetModelStatusResponse>* AsyncGetModelStatusRaw(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::GetModelStatusResponse>* PrepareAsyncGetModelStatusRaw(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::ReloadConfigResponse>* AsyncHandleReloadConfigRequestRaw(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::ReloadConfigResponse>* PrepareAsyncHandleReloadConfigRequestRaw(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::tensorflow::serving::GetModelStatusResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::GetModelStatusResponse>> AsyncGetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::GetModelStatusResponse>>(AsyncGetModelStatusRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::GetModelStatusResponse>> PrepareAsyncGetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::GetModelStatusResponse>>(PrepareAsyncGetModelStatusRaw(context, request, cq));
    }
    ::grpc::Status HandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::tensorflow::serving::ReloadConfigResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::ReloadConfigResponse>> AsyncHandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::ReloadConfigResponse>>(AsyncHandleReloadConfigRequestRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::ReloadConfigResponse>> PrepareAsyncHandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::ReloadConfigResponse>>(PrepareAsyncHandleReloadConfigRequestRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest* request, ::tensorflow::serving::GetModelStatusResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest* request, ::tensorflow::serving::GetModelStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetModelStatus(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest* request, ::tensorflow::serving::GetModelStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void HandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest* request, ::tensorflow::serving::ReloadConfigResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void HandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest* request, ::tensorflow::serving::ReloadConfigResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void HandleReloadConfigRequest(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest* request, ::tensorflow::serving::ReloadConfigResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::GetModelStatusResponse>* AsyncGetModelStatusRaw(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::GetModelStatusResponse>* PrepareAsyncGetModelStatusRaw(::grpc::ClientContext* context, const ::tensorflow::serving::GetModelStatusRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::ReloadConfigResponse>* AsyncHandleReloadConfigRequestRaw(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::ReloadConfigResponse>* PrepareAsyncHandleReloadConfigRequestRaw(::grpc::ClientContext* context, const ::tensorflow::serving::ReloadConfigRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetModelStatus_;
    const ::grpc::internal::RpcMethod rpcmethod_HandleReloadConfigRequest_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Gets status of model. If the ModelSpec in the request does not specify
    // version, information about all versions of the model will be returned. If
    // the ModelSpec in the request does specify a version, the status of only
    // that version will be returned.
    virtual ::grpc::Status GetModelStatus(::grpc::ServerContext* context, const ::tensorflow::serving::GetModelStatusRequest* request, ::tensorflow::serving::GetModelStatusResponse* response);
    // Reloads the set of served models. The new config supersedes the old one,
    // so if a model is omitted from the new config it will be unloaded and no
    // longer served.
    virtual ::grpc::Status HandleReloadConfigRequest(::grpc::ServerContext* context, const ::tensorflow::serving::ReloadConfigRequest* request, ::tensorflow::serving::ReloadConfigResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetModelStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetModelStatus() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetModelStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetModelStatus(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::GetModelStatusRequest* /*request*/, ::tensorflow::serving::GetModelStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetModelStatus(::grpc::ServerContext* context, ::tensorflow::serving::GetModelStatusRequest* request, ::grpc::ServerAsyncResponseWriter< ::tensorflow::serving::GetModelStatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_HandleReloadConfigRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_HandleReloadConfigRequest() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_HandleReloadConfigRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandleReloadConfigRequest(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::ReloadConfigRequest* /*request*/, ::tensorflow::serving::ReloadConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHandleReloadConfigRequest(::grpc::ServerContext* context, ::tensorflow::serving::ReloadConfigRequest* request, ::grpc::ServerAsyncResponseWriter< ::tensorflow::serving::ReloadConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetModelStatus<WithAsyncMethod_HandleReloadConfigRequest<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetModelStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetModelStatus() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::tensorflow::serving::GetModelStatusRequest, ::tensorflow::serving::GetModelStatusResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::tensorflow::serving::GetModelStatusRequest* request, ::tensorflow::serving::GetModelStatusResponse* response) { return this->GetModelStatus(context, request, response); }));}
    void SetMessageAllocatorFor_GetModelStatus(
        ::grpc::experimental::MessageAllocator< ::tensorflow::serving::GetModelStatusRequest, ::tensorflow::serving::GetModelStatusResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::tensorflow::serving::GetModelStatusRequest, ::tensorflow::serving::GetModelStatusResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetModelStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetModelStatus(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::GetModelStatusRequest* /*request*/, ::tensorflow::serving::GetModelStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetModelStatus(
      ::grpc::CallbackServerContext* /*context*/, const ::tensorflow::serving::GetModelStatusRequest* /*request*/, ::tensorflow::serving::GetModelStatusResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetModelStatus(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::tensorflow::serving::GetModelStatusRequest* /*request*/, ::tensorflow::serving::GetModelStatusResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_HandleReloadConfigRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_HandleReloadConfigRequest() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::tensorflow::serving::ReloadConfigRequest, ::tensorflow::serving::ReloadConfigResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::tensorflow::serving::ReloadConfigRequest* request, ::tensorflow::serving::ReloadConfigResponse* response) { return this->HandleReloadConfigRequest(context, request, response); }));}
    void SetMessageAllocatorFor_HandleReloadConfigRequest(
        ::grpc::experimental::MessageAllocator< ::tensorflow::serving::ReloadConfigRequest, ::tensorflow::serving::ReloadConfigResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::tensorflow::serving::ReloadConfigRequest, ::tensorflow::serving::ReloadConfigResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_HandleReloadConfigRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandleReloadConfigRequest(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::ReloadConfigRequest* /*request*/, ::tensorflow::serving::ReloadConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* HandleReloadConfigRequest(
      ::grpc::CallbackServerContext* /*context*/, const ::tensorflow::serving::ReloadConfigRequest* /*request*/, ::tensorflow::serving::ReloadConfigResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* HandleReloadConfigRequest(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::tensorflow::serving::ReloadConfigRequest* /*request*/, ::tensorflow::serving::ReloadConfigResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetModelStatus<ExperimentalWithCallbackMethod_HandleReloadConfigRequest<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetModelStatus<ExperimentalWithCallbackMethod_HandleReloadConfigRequest<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetModelStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetModelStatus() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetModelStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetModelStatus(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::GetModelStatusRequest* /*request*/, ::tensorflow::serving::GetModelStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_HandleReloadConfigRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_HandleReloadConfigRequest() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_HandleReloadConfigRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandleReloadConfigRequest(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::ReloadConfigRequest* /*request*/, ::tensorflow::serving::ReloadConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetModelStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetModelStatus() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetModelStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetModelStatus(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::GetModelStatusRequest* /*request*/, ::tensorflow::serving::GetModelStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetModelStatus(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_HandleReloadConfigRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_HandleReloadConfigRequest() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_HandleReloadConfigRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandleReloadConfigRequest(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::ReloadConfigRequest* /*request*/, ::tensorflow::serving::ReloadConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHandleReloadConfigRequest(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetModelStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetModelStatus() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetModelStatus(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetModelStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetModelStatus(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::GetModelStatusRequest* /*request*/, ::tensorflow::serving::GetModelStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetModelStatus(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetModelStatus(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_HandleReloadConfigRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_HandleReloadConfigRequest() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->HandleReloadConfigRequest(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_HandleReloadConfigRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandleReloadConfigRequest(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::ReloadConfigRequest* /*request*/, ::tensorflow::serving::ReloadConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* HandleReloadConfigRequest(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* HandleReloadConfigRequest(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetModelStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetModelStatus() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::tensorflow::serving::GetModelStatusRequest, ::tensorflow::serving::GetModelStatusResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::tensorflow::serving::GetModelStatusRequest, ::tensorflow::serving::GetModelStatusResponse>* streamer) {
                       return this->StreamedGetModelStatus(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetModelStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetModelStatus(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::GetModelStatusRequest* /*request*/, ::tensorflow::serving::GetModelStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetModelStatus(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tensorflow::serving::GetModelStatusRequest,::tensorflow::serving::GetModelStatusResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HandleReloadConfigRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_HandleReloadConfigRequest() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::tensorflow::serving::ReloadConfigRequest, ::tensorflow::serving::ReloadConfigResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::tensorflow::serving::ReloadConfigRequest, ::tensorflow::serving::ReloadConfigResponse>* streamer) {
                       return this->StreamedHandleReloadConfigRequest(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_HandleReloadConfigRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HandleReloadConfigRequest(::grpc::ServerContext* /*context*/, const ::tensorflow::serving::ReloadConfigRequest* /*request*/, ::tensorflow::serving::ReloadConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHandleReloadConfigRequest(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tensorflow::serving::ReloadConfigRequest,::tensorflow::serving::ReloadConfigResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetModelStatus<WithStreamedUnaryMethod_HandleReloadConfigRequest<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetModelStatus<WithStreamedUnaryMethod_HandleReloadConfigRequest<Service > > StreamedService;
};

}  // namespace serving
}  // namespace tensorflow


#endif  // GRPC_tensorflow_5fserving_2fapis_2fmodel_5fservice_2eproto__INCLUDED
