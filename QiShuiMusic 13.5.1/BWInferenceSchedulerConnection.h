@interface BWInferenceSchedulerConnection : NSObject
@property (nonatomic) Q identifier;
@property (nonatomic) NSObject<OS_dispatch_queue> inferenceQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> scalingQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> submissionQueue;
@property (nonatomic) NSObject<OS_dispatch_group> coordinationGroup;
@property (nonatomic) BWInferenceSchedulerResourceCoordinator coordinator;
@property (nonatomic) BWInferenceSchedulerFramebuffer framebuffer;
- (id)init;
- (id)submissionQueue;
- (void)dealloc;
- (id)framebuffer;
- (unsigned long long)identifier;
- (id)inferenceQueue;
- (id)coordinator;
- (void)setFramebuffer:;
- (id)coordinationGroup;
- (id)scalingQueue;
- (id)initWithInferenceTargetQueue:scalingTargetQueue:submissionTargetQueue:;
@end
