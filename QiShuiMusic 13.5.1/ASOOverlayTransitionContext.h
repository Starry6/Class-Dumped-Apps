@interface ASOOverlayTransitionContext : NSObject
@property (nonatomic) NSMutableArray animationBlocks;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} startFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} endFrame;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endFrame;
- (void).cxx_destruct;
- (void)setEndFrame:;
- (void)setStartFrame:;
- (id)animationBlocks;
- (void)setAnimationBlocks:;
- (id)startFrame;
- (void)addAnimationBlock:;
- (id)initWithStartFrame:endFrame:;
+ (BOOL)supportsSecureCoding;
@end
