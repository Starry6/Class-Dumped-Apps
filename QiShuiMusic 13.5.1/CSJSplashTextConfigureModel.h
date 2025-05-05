@interface CSJSplashTextConfigureModel : NSObject
@property (nonatomic) q font_size;
- (long long)font_size;
- (id)initWithConfigure:defaultFontSize:;
- (void)setFont_size:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
@end
