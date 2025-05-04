@interface AWESearchBackgroundGradientModel : AWEBaseApiModel
@property (nonatomic) UIColor startColor;
@property (nonatomic) UIColor centerColor;
@property (nonatomic) UIColor endColor;
@property (nonatomic) double centerColorPosition;
@property (nonatomic) double centerColorPXPosition;
@property (nonatomic) Q gradientLayoutType;
- (id)centerColor;
- (double)centerColorPXPosition;
- (double)centerColorPosition;
- (unsigned long long)gradientLayoutType;
- (void)setCenterColorPosition:;
- (void)setCenterColorPXPosition:;
- (void)setGradientLayoutType:;
- (void).cxx_destruct;
- (id)endColor;
- (void)setEndColor:;
- (void)setStartColor:;
- (id)startColor;
- (void)setCenterColor:;
+ (id)startColorJSONTransformer;
+ (id)endColorJSONTransformer;
+ (id)centerColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
