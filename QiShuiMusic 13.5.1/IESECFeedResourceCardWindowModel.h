@interface IESECFeedResourceCardWindowModel : IESECFeedResourceCardBaseNode
@property (nonatomic) BOOL followStatus;
@property (nonatomic) NSNumber authorID;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString windowInterest;
@property (nonatomic) IESECURLModel authorAvatar;
@property (nonatomic) NSArray products;
- (id)authorAvatar;
- (BOOL)followStatus;
- (void)setAuthorAvatar:;
- (void)setFollowStatus:;
- (void)setWindowInterest:;
- (id)windowInterest;
- (id)products;
- (void).cxx_destruct;
- (id)authorName;
- (void)setProducts:;
- (void)setAuthorName:;
- (id)authorID;
- (void)setAuthorID:;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
