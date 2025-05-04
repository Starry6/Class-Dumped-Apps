@interface AWEVisitorNotificationModel : AWEBaseApiModel
@property (nonatomic) NSArray fromUsers;
@property (nonatomic) NSString content;
@property (nonatomic) AWEInteractModularizationTextModel messageHint;
@property (nonatomic) NSString title;
@property (nonatomic) NSString labelText;
@property (nonatomic) q labelType;
@property (nonatomic) q mergeCount;
- (long long)mergeCount;
- (void)setFromUsers:;
- (id)fromUsers;
- (void)setMergeCount:;
- (id)labelText;
- (id)content;
- (long long)labelType;
- (void)setLabelType:;
- (void)setContent:;
- (void)setLabelText:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setMessageHint:;
- (id)messageHint;
+ (id)fromUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
