@interface AWECampaignProfileTabbarModel : MTLModel
@property (nonatomic) AWECampaignTabbarBubbleModel tabbarBubbleModel;
@property (nonatomic) BOOL isReady;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabbarBubbleModel;
- (void)setTabbarBubbleModel:;
- (BOOL)isReady;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)setIsReady:;
+ (id)tabbarBubbleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
