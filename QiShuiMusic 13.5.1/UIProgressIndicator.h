@interface UIProgressIndicator : UIActivityIndicatorView
@property (nonatomic) NSInteger progressIndicatorStyle;
- (void)setAnimating:;
- (void)setStyle:;
- (void)startAnimation;
- (void)stopAnimation;
- (int)progressIndicatorStyle;
- (void)setProgressIndicatorStyle:;
+ (id)size;
@end
