@interface HTSGLTransRootFilter : HTSGLFilter
@property (nonatomic) float progress;
@property (nonatomic) q programType;
- (void)setProgramType:;
- (void)setProgress:;
- (float)progress;
- (long long)programType;
@end
