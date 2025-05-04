@interface AWEIMCollapsibleTopContainerAnimationContext : NSObject
@property (nonatomic) double animationDuration;
@property (nonatomic) CAMediaTimingFunction timingFunction;
@property (nonatomic) {CGSize=dd} containerTargetSize;
- (id)containerTargetSize;
- (void)setContainerTargetSize:;
- (id)timingFunction;
- (void)setTimingFunction:;
- (void).cxx_destruct;
- (void)setAnimationDuration:;
- (double)animationDuration;
@end
