@interface AWESmartFeedOutCommentModel : AWEBaseApiModel
@property (nonatomic) NSString commentID;
@property (nonatomic) NSString commentText;
@property (nonatomic) NSString userName;
@property (nonatomic) q diggedCount;
@property (nonatomic) AWEURLModel avatarThumb;
- (id)avatarThumb;
- (id)commentID;
- (void)setCommentID:;
- (void)setAvatarThumb:;
- (long long)diggedCount;
- (void)setDiggedCount:;
- (id)userName;
- (void).cxx_destruct;
- (void)setUserName:;
- (void)setCommentText:;
- (id)commentText;
+ (id)avatarThumbJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;
@end
