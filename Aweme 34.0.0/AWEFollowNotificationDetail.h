@interface AWEFollowNotificationDetail : AWEBaseApiModel
@property (nonatomic) NSString templateText;
@property (nonatomic) NSArray templateValue;
- (id)templateValue;
- (id)templateText;
- (void)setTemplateText:;
- (void)setTemplateValue:;
- (void).cxx_destruct;
+ (id)templateValueJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
