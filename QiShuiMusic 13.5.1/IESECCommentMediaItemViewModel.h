@interface IESECCommentMediaItemViewModel : NSObject
@property (nonatomic) NSNumber commentID;
@property (nonatomic) NSString content;
@property (nonatomic) NSString skuDescription;
@property (nonatomic) NSString userName;
@property (nonatomic) NSNumber likesCount;
@property (nonatomic) BOOL liked;
@property (nonatomic) q browserIndex;
@property (nonatomic) q commentIndex;
@property (nonatomic) IESECCommentPhotoModel photo;
@property (nonatomic) IESECHeadVideoModel video;
@property (nonatomic) q photoCount;
@property (nonatomic) q videoCount;
- (long long)browserIndex;
- (id)commentID;
- (long long)commentIndex;
- (id)likesCount;
- (void)setBrowserIndex:;
- (void)setCommentID:;
- (void)setCommentIndex:;
- (void)setLikesCount:;
- (void)setSkuDescription:;
- (id)skuDescription;
- (id)content;
- (void)setContent:;
- (id)userName;
- (long long)photoCount;
- (void)setUserName:;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (void)setLiked:;
- (id)photo;
- (void)setPhoto:;
- (BOOL)liked;
- (long long)videoCount;
- (void)setVideoCount:;
- (void)setPhotoCount:;
@end
