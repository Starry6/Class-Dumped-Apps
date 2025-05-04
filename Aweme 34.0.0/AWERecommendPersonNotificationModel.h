@interface AWERecommendPersonNotificationModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) AWEUserModel fromUser;
- (void)setFromUser:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)fromUser;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
