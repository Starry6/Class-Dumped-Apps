@interface AWEFriendNoticeNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) IESIMUserModel fromUser;
@property (nonatomic) q friendType;
- (id)schemaURL;
- (void)setFriendType:;
- (void)setFromUser:;
- (void)setSchemaURL:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)fromUser;
- (long long)friendType;
+ (id)fromUserJSONTransformer;
+ (id)typeJSONTranformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
