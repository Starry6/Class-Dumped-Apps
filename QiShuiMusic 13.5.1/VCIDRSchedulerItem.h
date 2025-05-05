@interface VCIDRSchedulerItem : NSObject
@property (nonatomic) I framePosition;
@property (nonatomic) I weightFactor;
@property (nonatomic) I budgetInCaptureFrames;
@property (nonatomic) NSArray streams;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)streams;
- (unsigned int)framePosition;
- (void)setFramePosition:;
- (void)addStream:;
- (long long)compareBudget:;
- (unsigned int)budgetInCaptureFrames;
- (void)setBudgetInCaptureFrames:;
- (unsigned int)weightFactor;
- (void)setWeightFactor:;
@end
