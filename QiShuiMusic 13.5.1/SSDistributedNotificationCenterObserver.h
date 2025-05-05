@interface SSDistributedNotificationCenterObserver : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) NSString name;
- (id)block;
- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithName:queue:block:;
- (id)name;
@end
