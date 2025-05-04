@interface AWEHPBottomTabLottiePrivatedParams : AWEHPBottomTabLottieParams
@property (nonatomic) NSString tabID;
@property (nonatomic) NSArray tabPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabID:;
- (id)tabPosition;
- (void)setTabPosition:;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)tabID;
+ (id)modelWithRawData:lottieID:error:;
+ (id)lottieParamsJSONTransformer;
+ (id)playParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
