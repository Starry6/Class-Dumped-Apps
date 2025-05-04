@interface AWENoxusGradientView : UIView
@property (nonatomic) BOOL startFromUp;
@property (nonatomic) UIColor startColor;
@property (nonatomic) UIColor endColor;
- (void)setStartFromUp:;
- (BOOL)startFromUp;
- (id)initWithDirection:startColor:endColor:;
- (void)refreshStartColor:endColor:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)endColor;
- (void)setEndColor:;
- (void)setStartColor:;
- (id)startColor;
- (id)initWithDirection:;
+ (Class)layerClass;
@end
