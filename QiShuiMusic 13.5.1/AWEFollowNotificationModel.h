@interface AWEFollowNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) IESIMUserModel fromUser;
@property (nonatomic) IESIMRelationDynamicLable relationLabel;
@property (nonatomic) Q followBtnType;
- (unsigned long long)followBtnType;
- (id)relationLabel;
- (void)setFollowBtnType:;
- (void)setFromUser:;
- (void)setRelationLabel:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)fromUser;
+ (id)fromUserJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
