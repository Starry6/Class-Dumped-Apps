@interface AWEProfilePostUnreadNoticeModel : MTLModel
@property (nonatomic) NSString itemID;
@property (nonatomic) q commentCount;
@property (nonatomic) q diggCount;
@property (nonatomic) NSArray commentUsers;
@property (nonatomic) NSArray diggUsers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)diggCount;
- (void)setDiggCount:;
- (id)commentUsers;
- (void)setCommentUsers:;
- (id)diggUsers;
- (void)setDiggUsers:;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (long long)commentCount;
- (void)setCommentCount:;
+ (id)diggUsersJSONTransformer;
+ (id)commentUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
