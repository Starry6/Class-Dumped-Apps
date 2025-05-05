@interface AWEVisitorNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSArray fromUsers;
@property (nonatomic) NSString content;
@property (nonatomic) NSString title;
- (id)fromUsers;
- (void)setFromUsers:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)fromUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
