@interface IMTimer : NSObject
@property (nonatomic) @ userInfo;
@property (nonatomic) NSDate fireDate;
- (void)dealloc;
- (void)setFireTimeInterval:;
- (id)userInfo;
- (void)_reschedulePCPersistentTimer;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)initWithTimeInterval:name:shouldWake:target:selector:userInfo:queue:;
- (id)initWithTimeInterval:name:shouldWake:target:selector:userInfo:useCurrentRunLoop:;
- (id)_initWithTimeInterval:name:shouldWake:target:selector:userInfo:useCurrentRunLoop:queue:;
- (id)fireDate;
- (void)invalidate;
- (id)initWithTimeInterval:name:shouldWake:target:selector:userInfo:;
@end
