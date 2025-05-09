@interface VSJSApp : NSObject
@property (nonatomic) NSString script;
@property (nonatomic) NSURL url;
@property (nonatomic) NSURL effectiveURL;
@property (nonatomic) VSSingleThreadDispatchQueue jsSingleThreadQueue;
@property (nonatomic) JSContext context;
@property (nonatomic) VSStateMachine stateMachine;
@property (nonatomic) NSOperationQueue privateQueue;
@property (nonatomic) NSObject<OS_dispatch_source> watchdog;
@property (nonatomic) NSMutableArray scriptEvaluators;
@property (nonatomic) <VSJSAppDelegate> delegate;
@property (nonatomic) q state;
@property (nonatomic) BOOL enforceSystemTrust;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)privateQueue;
- (void)setPrivateQueue:;
- (void)evaluateScript:withSourceURL:;
- (id)url;
- (id)context;
- (void)setState:;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (id)stateMachine;
- (void)setUrl:;
- (id)_errorWithCode:underlyingError:;
- (void)setStateMachine:;
- (long long)state;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContext:;
- (id)script;
- (void)setScript:;
- (id)watchdog;
- (void)setWatchdog:;
- (void)_configureWatchdogWithSeconds:;
- (id)initWithScriptURL:;
- (void)setExceptionWithMessage:;
- (void)evaluateWithBlock:;
- (void)_initializeContext;
- (void)_invokeOnLaunch;
- (void)_invokeOnExit;
- (void)transitionToWaitingForBootUrlState;
- (id)_exceptionErrorWithCode:;
- (void)transitionToWaitingForBootScriptState;
- (void)transitionToWaitingForOnLaunchCallbackState;
- (void)transitionToWaitingForOnExitCallbackState;
- (void)transitionToReadyState;
- (void)transitionToErrorState;
- (void)transitionToStoppedState;
- (BOOL)enforceSystemTrust;
- (void)setEnforceSystemTrust:;
- (id)effectiveURL;
- (void)setEffectiveURL:;
- (id)jsSingleThreadQueue;
- (void)setJsSingleThreadQueue:;
- (id)scriptEvaluators;
- (void)setScriptEvaluators:;
+ (id)currentContext;
@end
