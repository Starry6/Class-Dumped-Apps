@interface AWERecommendPersonNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) IESIMUserModel fromUser;
- (void)setFromUser:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)fromUser;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
