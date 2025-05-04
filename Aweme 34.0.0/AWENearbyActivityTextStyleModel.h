@interface AWENearbyActivityTextStyleModel : AWEBaseApiModel
@property (nonatomic) NSString gradientStartColor;
@property (nonatomic) NSString gradientEndColor;
@property (nonatomic) q obliqueAngle;
@property (nonatomic) q outerStrokeWidth;
@property (nonatomic) NSString outerStrokeColor;
@property (nonatomic) q gradientDirection;
- (id)outerStrokeColor;
- (long long)obliqueAngle;
- (void)setObliqueAngle:;
- (long long)outerStrokeWidth;
- (void)setOuterStrokeWidth:;
- (void)setOuterStrokeColor:;
- (void).cxx_destruct;
- (long long)gradientDirection;
- (void)setGradientDirection:;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (void)setGradientEndColor:;
- (void)setGradientStartColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
