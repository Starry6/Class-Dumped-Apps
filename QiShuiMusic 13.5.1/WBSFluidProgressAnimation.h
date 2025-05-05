@interface WBSFluidProgressAnimation : NSObject
@property (nonatomic) CAMediaTimingFunction timingFunction;
@property (nonatomic) double initialPosition;
@property (nonatomic) double destinationPosition;
@property (nonatomic) double animationDuration;
- (void)setTimingFunction:;
- (double)animationDuration;
- (id)timingFunction;
- (void)setAnimationDuration:;
- (void).cxx_destruct;
- (double)initialPosition;
- (double)destinationPosition;
- (void)setInitialPosition:;
- (void)setDestinationPosition:;
@end
