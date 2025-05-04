@interface AWEIMServiceMsgUpgradeContentShowTips : AWEBaseApiModel
@property (nonatomic) NSString tips;
@property (nonatomic) NSArray tipsTemplate;
- (id)tipsTemplate;
- (void)setTipsTemplate:;
- (id)tips;
- (void).cxx_destruct;
- (void)setTips:;
+ (id)tipsTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
