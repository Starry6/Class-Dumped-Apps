@interface LPTapToLoadViewStyle : NSObject
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor tapHighlightColor;
@property (nonatomic) LPTextViewStyle caption;
@property (nonatomic) LPPointUnit width;
@property (nonatomic) LPPointUnit height;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void)setWidth:;
- (id)caption;
- (id)height;
- (id)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)tapHighlightColor;
- (id)initWithPlatform:sizeClass:fontScalingFactor:;
- (void)setTapHighlightColor:;
@end
