@interface AWEECShoppingAIGuideHomePageDynamicModel : MTLModel
@property (nonatomic) AWEECShoppingAIGuideHomePageLeadingModel leadingWord;
@property (nonatomic) NSString pageDynamicRawConfig;
@property (nonatomic) NSDictionary cardData;
@property (nonatomic) q cardType;
@property (nonatomic) double actualLynxHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)leadingWord;
- (void)setLeadingWord:;
- (id)pageDynamicRawConfig;
- (void)setPageDynamicRawConfig:;
- (double)actualLynxHeight;
- (void)setActualLynxHeight:;
- (void).cxx_destruct;
- (id)cardData;
- (long long)cardType;
- (void)setCardType:;
- (void)setCardData:;
+ (id)leadingWordDynamicModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
