@interface IESLiveEnterRoomHandleManager : NSObject
@property (nonatomic) IESLiveComponentsTraceContext traceContext;
@property (nonatomic) IESLiveEnterRoomProcessTrace traceProcessContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didDetectExitReason:desc:info:;
- (void)enterNewRoom:;
- (void)registerObserver;
- (void)setTraceContext:;
- (void)setTraceProcessContext:;
- (id)traceContext;
- (id)traceProcessContext;
- (void)updateDiOptEnable;
- (id)init;
- (void)clearAll;
- (void).cxx_destruct;
+ (id)enterProcessTrace;
+ (id)traceContext;
+ (id)manager;
@end
