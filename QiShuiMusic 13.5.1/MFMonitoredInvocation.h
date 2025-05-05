@interface MFMonitoredInvocation : NSInvocation
@property (nonatomic) MFActivityMonitor monitor;
@property (nonatomic) NSString powerAssertionId;
- (void)dealloc;
- (void)invoke;
- (void).cxx_destruct;
- (id)description;
- (id)monitor;
- (id)powerAssertionId;
- (void)setPowerAssertionId:;
- (BOOL)mf_shouldLogInvocation;
- (void)setShouldLogInvocation:;
+ (id)invocationWithMethodSignature:;
+ (id)invocationWithSelector:target:taskName:priority:canBeCancelled:;
+ (id)invocationWithSelector:target:object:taskName:priority:canBeCancelled:;
+ (id)invocationWithSelector:target:object1:object2:taskName:priority:canBeCancelled:;
@end
