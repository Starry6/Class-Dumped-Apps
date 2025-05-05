@interface IESLiveGiftTraySlideRateHotConfig : MTLModel
@property (nonatomic) NSNumber hotLevel;
@property (nonatomic) NSArray priceConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)priceConfigs;
- (void)setPriceConfigs:;
- (void).cxx_destruct;
- (id)hotLevel;
- (void)setHotLevel:;
+ (id)priceConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
