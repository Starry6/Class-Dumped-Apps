@interface BSDispatchQueueAttributes : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue_attr> attributes;
- (id)autoreleaseFrequency:;
- (id)targetQueue:;
- (id)attributes;
- (id)serviceClass:relativePriority:;
- (id)inactive;
- (void).cxx_destruct;
- (id)serviceClass:;
- (id)copyWithZone:;
+ (id)serial;
+ (id)concurrent;
@end
