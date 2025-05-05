@interface HTSGLFilterTwoPassSamplingFilter : HTSGLFilterTwoPass
@property (nonatomic) double verticalTexelSpacing;
@property (nonatomic) double horizontalTexelSpacing;
- (double)horizontalTexelSpacing;
- (void)setHorizontalTexelSpacing:;
- (void)setVerticalTexelSpacing:;
- (double)verticalTexelSpacing;
- (id)initWithContext:;
@end
