@interface IESIMRiskPreventModel : IESIMBaseApiModel
@property (nonatomic) NSString advicePhone;
@property (nonatomic) NSString adviceUrl;
@property (nonatomic) NSString adviceAgentTitle;
- (void)setAdvicePhone:;
- (id)adviceAgentTitle;
- (id)advicePhone;
- (id)adviceUrl;
- (void)setAdviceAgentTitle:;
- (void)setAdviceUrl:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
