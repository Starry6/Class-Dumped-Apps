@interface UIKBGradient : NSObject
@property (nonatomic) double opacity;
@property (nonatomic) BOOL horizontal;
@property (nonatomic) BOOL usesRGBColors;
@property (nonatomic) NSString flatColorName;
- (void)setOpacity:;
- (double)opacity;
- (id)initWithName:;
- (BOOL)usesRGBColors;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)horizontal;
- (id)CGGradient;
- (id)flatColorName;
- (id)initWithFlatColor:;
- (id)initWithStartColor:endColor:;
- (id)initWith3Colors:middleLocation:;
- (id)initWithColors:middleLocations:;
- (void)setHorizontal:;
+ (id)gradientWithName:;
+ (id)gradientWithFlatColor:;
+ (id)gradientWithStartColor:endColor:;
+ (id)gradientWith3Colors:middleLocation:;
+ (id)gradientWithColors:middleLocations:;
@end
