@interface AWEHotSearchCommentAuthorInfoModel : NSObject
@property (nonatomic) NSArray avatarImageURLList;
@property (nonatomic) NSString authorNameText;
@property (nonatomic) NSString authorIdentityText;
@property (nonatomic) BOOL isAuthor;
- (void)setIsAuthor:;
- (void)setAvatarImageURLList:;
- (id)avatarImageURLList;
- (id)authorNameText;
- (id)authorIdentityText;
- (BOOL)isAuthor;
- (void)setAuthorNameText:;
- (void)setAuthorIdentityText:;
- (void).cxx_destruct;
@end
