@interface AWECampaignTaskFinishModel : MTLModel
@property (nonatomic) AWECampaignActionToastModel actionToastModel;
@property (nonatomic) AWECampaignActionSubmitTaskModel actionSubmitModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionToastModel;
- (void)setActionToastModel:;
- (id)actionSubmitModel;
- (void)setActionSubmitModel:;
- (void).cxx_destruct;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
