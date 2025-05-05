@interface FBSSerialQueue : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)performAfter:withBlock:;
- (void)dealloc;
- (void)assertBarrierOnQueue;
- (unsigned long long)hash;
- (id)backingQueueIfExists;
- (void)performAsync:withHandoff:;
- (void).cxx_destruct;
- (id)description;
- (void)performAsync:;
- (BOOL)isEqual:;
- (void)assertOnQueue;
+ (id)queueWithMainRunLoopModes:;
+ (id)queueWithDispatchQueue:;
@end
