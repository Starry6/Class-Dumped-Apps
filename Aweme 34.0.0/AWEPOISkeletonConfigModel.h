@interface AWEPOISkeletonConfigModel : NSObject
@property (nonatomic) {CGPoint=dd} origin;
@property (nonatomic) double skeletonCornerRadius;
@property (nonatomic) double itemCornerRadius;
@property (nonatomic) NSArray backgroundColorsArray;
@property (nonatomic) NSArray itemColorsArray;
@property (nonatomic) q gradientDirection;
@property (nonatomic) NSString animation;
@property (nonatomic) NSArray items;
- (double)skeletonCornerRadius;
- (void)setSkeletonCornerRadius:;
- (id)backgroundColorsArray;
- (void)setBackgroundColorsArray:;
- (id)itemColorsArray;
- (void)setItemColorsArray:;
- (void)setOrigin:;
- (id)items;
- (void)setItems:;
- (id)origin;
- (void).cxx_destruct;
- (void)setItemCornerRadius:;
- (id)animation;
- (void)setAnimation:;
- (double)itemCornerRadius;
- (long long)gradientDirection;
- (void)setGradientDirection:;
@end
