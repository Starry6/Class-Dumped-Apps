@interface AWECampaignTaskInstanceModel : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray rewardList;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString toast;
@property (nonatomic) NSDictionary popup;
@property (nonatomic) NSDictionary taskInstance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)rewardList;
- (void)setRewardList:;
- (id)taskInstance;
- (void)setTaskInstance:;
- (id)schema;
- (void)setSchema:;
- (id)extra;
- (void).cxx_destruct;
- (id)popup;
- (void)setPopup:;
- (void)setToast:;
- (id)toast;
+ (id)rewardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
