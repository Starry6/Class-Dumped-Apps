@interface AWECampaignTaskStateActionModel : MTLModel
@property (nonatomic) AWECampaignTaskFinishModel taskFinishModel;
@property (nonatomic) AWECampaignTaskPauseModel taskPauseModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskFinishModel;
- (void)setTaskFinishModel:;
- (id)taskPauseModel;
- (void)setTaskPauseModel:;
- (void).cxx_destruct;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
