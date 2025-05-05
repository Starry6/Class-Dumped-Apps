@interface MTLSharedEventListener : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (id)init;
- (id)initWithDispatchQueue:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
