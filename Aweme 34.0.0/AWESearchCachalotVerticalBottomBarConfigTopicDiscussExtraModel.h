@interface AWESearchCachalotVerticalBottomBarConfigTopicDiscussExtraModel : MTLModel
@property (nonatomic) AWESearchHotSpotConfigModel bottomBarConfig;
@property (nonatomic) AWESearchCardTemplateModel cardTemplate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBottomBarConfig:;
- (id)bottomBarConfig;
- (id)cardTemplate;
- (void)setCardTemplate:;
- (void).cxx_destruct;
+ (id)bottomBarConfigJSONTransformer;
+ (id)cardTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
