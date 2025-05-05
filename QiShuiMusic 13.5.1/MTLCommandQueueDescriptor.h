@interface MTLCommandQueueDescriptor : NSObject
@property (nonatomic) Q maxCommandBufferCount;
@property (nonatomic) Q qosLevel;
@property (nonatomic) NSObject<OS_dispatch_queue> commitQueue;
@property (nonatomic) BOOL commitSynchronously;
@property (nonatomic) NSObject<OS_dispatch_queue> completionQueue;
@property (nonatomic) BOOL disableCrossQueueHazardTracking;
@property (nonatomic) BOOL disableAsyncCompletionDispatch;
@property (nonatomic) Q devicePartition;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)commandQueueDescriptor;
@end
