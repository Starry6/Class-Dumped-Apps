@interface AWEHPTopTabLottiePrivatedParams : AWEHPTopTabLottieParams
@property (nonatomic) NSString indicatorDarkColor;
@property (nonatomic) NSString indicatorLightColor;
@property (nonatomic) NSString tabID;
@property (nonatomic) NSArray tabPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabID:;
- (id)tabPosition;
- (void)setIndicatorDarkColor:;
- (void)setTabPosition:;
- (void)setIndicatorLightColor:;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)tabID;
- (id)indicatorDarkColor;
- (id)indicatorLightColor;
+ (id)modelWithRawData:lottieID:error:;
+ (id)lottieParamsJSONTransformer;
+ (id)playParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
