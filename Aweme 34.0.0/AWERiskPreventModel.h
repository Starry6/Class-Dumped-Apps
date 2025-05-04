@interface AWERiskPreventModel : AWEBaseApiModel
@property (nonatomic) NSString advicePhone;
@property (nonatomic) NSString adviceUrl;
@property (nonatomic) NSString adviceAgentTitle;
- (void)setAdvicePhone:;
- (void)setAdviceUrl:;
- (id)adviceAgentTitle;
- (void)setAdviceAgentTitle:;
- (id)advicePhone;
- (id)adviceUrl;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
