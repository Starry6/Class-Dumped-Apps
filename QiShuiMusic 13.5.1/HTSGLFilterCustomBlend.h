@interface HTSGLFilterCustomBlend : HTSGLFilterTwoInput
@property (nonatomic) double mix;
- (void)setMix:;
- (double)mix;
- (void)initializeRenderer:;
- (id)initWithContext:;
@end
