@interface AWESearchAwemeExtraLifeRateInfoModel : AWEBaseApiModel
@property (nonatomic) NSNumber reduceVideoCardDescMaxTextLinesValue;
@property (nonatomic) NSString strRateDescription;
@property (nonatomic) AWESearchAwemeExtraLifeRateLevelIconInfoModel rateLevelIconInfo;
- (void)setReduceVideoCardDescMaxTextLinesValue:;
- (void)setStrRateDescription:;
- (void)setRateLevelIconInfo:;
- (id)strRateDescription;
- (id)rateLevelIconInfo;
- (id)reduceVideoCardDescMaxTextLinesValue;
- (void).cxx_destruct;
+ (id)rateLevelIconInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
