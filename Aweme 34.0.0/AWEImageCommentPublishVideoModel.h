@interface AWEImageCommentPublishVideoModel : AWEBaseApiModel
@property (nonatomic) NSString imageCommentID;
@property (nonatomic) NSString imageCommentOriginalAwemeID;
@property (nonatomic) NSString imageCommentOriginalAwemeTitle;
@property (nonatomic) NSString imageCommentOriginalAwemeAuthorName;
@property (nonatomic) NSString imageCommentOriginalAwemeAuthorID;
@property (nonatomic) q imageCommentVersion;
- (id)imageCommentID;
- (id)imageCommentOriginalAwemeID;
- (long long)imageCommentVersion;
- (void)setImageCommentVersion:;
- (void)setImageCommentID:;
- (void)setImageCommentOriginalAwemeID:;
- (id)imageCommentOriginalAwemeTitle;
- (void)setImageCommentOriginalAwemeTitle:;
- (id)imageCommentOriginalAwemeAuthorName;
- (void)setImageCommentOriginalAwemeAuthorName:;
- (id)imageCommentOriginalAwemeAuthorID;
- (void)setImageCommentOriginalAwemeAuthorID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
