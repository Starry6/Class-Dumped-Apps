@interface AWESearchUserCachalotResponse : AWESearchResultCachalotDataResponse
@property (nonatomic) AWESearchUserBusinessConfigModel businessConfigModel;
@property (nonatomic) AWESearchGlobalDoodleConfigModel extraModel;
@property (nonatomic) AWEDiscoverySearchFeedbackModel feedbackModel;
@property (nonatomic) NSArray leafModels;
- (id)extraModel;
- (void)setExtraModel:;
- (id)feedbackModel;
- (void)setFeedbackModel:;
- (id)businessConfigModel;
- (void)setLeafModels:;
- (id)leafModels;
- (void)setBusinessConfigModel:;
- (void).cxx_destruct;
+ (id)feedbackModelJSONTransformer;
+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
