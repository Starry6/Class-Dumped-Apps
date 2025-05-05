@interface IESGLGaussianBlurFilter : HTSGLFilter
@property (nonatomic) double radius;
@property (nonatomic) double width;
@property (nonatomic) double height;
- (void)initializeRenderer:;
- (void)setRadius:;
- (double)radius;
- (void)setWidth:;
- (double)height;
- (double)width;
- (id)initWithContext:;
- (void)setHeight:;
@end
