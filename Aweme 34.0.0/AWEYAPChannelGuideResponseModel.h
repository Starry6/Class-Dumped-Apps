@interface AWEYAPChannelGuideResponseModel : AWEBaseApiModel
@property (nonatomic) NSString retStatus;
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) AWEYAPChannelGuideContentInfo ruleContentInfo;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)retStatus;
- (void)setRetStatus:;
- (id)ruleContentInfo;
- (void)setRuleContentInfo:;
- (void).cxx_destruct;
- (BOOL)isSuccess;
+ (id)JSONKeyPathsByPropertyKey;
@end
