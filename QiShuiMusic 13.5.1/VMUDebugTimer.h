@interface VMUDebugTimer : NSObject
@property (nonatomic) NSObject<OS_os_log> logHandle;
@property (nonatomic) Q signpostID;
- (id)logHandle;
- (id)init;
- (unsigned long long)signpostID;
- (void)stop;
- (void).cxx_destruct;
- (void)endEvent:;
- (void)startWithMessage:;
- (void)startWithCategory:message:;
+ (id)sharedTimer;
+ (id)sharedTimerIfCreated;
@end
