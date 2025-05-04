@interface AWEAdPlayerBottomGradientProcessorResult : NSObject
@property (nonatomic) double resultAlpha;
@property (nonatomic) double brightness;
@property (nonatomic) BOOL canHide;
@property (nonatomic) UIColor colorRGB;
- (id)colorRGB;
- (void)setColorRGB:;
- (void)setResultAlpha:;
- (double)resultAlpha;
- (void)setBrightness:;
- (double)brightness;
- (void).cxx_destruct;
- (BOOL)canHide;
- (void)setCanHide:;
+ (id)resultWithBuild:;
@end
