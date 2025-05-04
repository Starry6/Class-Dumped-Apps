@interface AWESearchAIGCSSLuckyTaskManager : NSObject
@property (nonatomic) NSString luckyTaskAction;
@property (nonatomic) @? toastParamCallback;
@property (nonatomic) BOOL taskStarted;
- (id)luckyTaskAction;
- (id)initWithToastParamCallback:;
- (void)pendantHideAndStopTiming;
- (void)startWithTaskAction:inputKeyword:;
- (void)pendantShowAndStartTiming;
- (void)setToastParamCallback:;
- (BOOL)taskStarted;
- (void)setTaskStarted:;
- (void)setLuckyTaskAction:;
- (id)aAWESearchLuckyServiceDOUYINSSAdapter;
- (void)showToastOnInputSendButton;
- (void)pendantShowNeedStartTiming:;
- (id)toastParamCallback;
- (void).cxx_destruct;
+ (Class)aAWESearchLuckyServiceDOUYINSSAdapterClass;
@end
