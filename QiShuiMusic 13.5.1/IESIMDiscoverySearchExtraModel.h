@interface IESIMDiscoverySearchExtraModel : IESIMBaseApiModel
@property (nonatomic) IESIMDiscoverySearchExtraRiskWarningModel riskWarningModel;
@property (nonatomic) IESIMDiscoverySearchFeedbackModel feedbackModel;
@property (nonatomic) NSString keyword;
- (id)feedbackModel;
- (id)riskWarningModel;
- (void)setFeedbackModel:;
- (void)setRiskWarningModel:;
- (void).cxx_destruct;
- (void)setKeyword:;
- (id)keyword;
+ (id)riskWarningModelJSONTransformer;
+ (id)feedbackModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
