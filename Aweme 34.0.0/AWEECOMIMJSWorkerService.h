@interface AWEECOMIMJSWorkerService : NSObject
@property (nonatomic) JsWorkerIOS worker;
@property (nonatomic) <AWEECOMIMJSWorkerServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)evaluateJavaScript:;
- (void)invokeFunction:params:callback:;
- (void)initJSWorker;
- (void)handleMessage:;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (void)handleError:;
- (void)setDelegate:;
- (void)setWorker:;
- (id)worker;
- (void)postMessage:;
@end
