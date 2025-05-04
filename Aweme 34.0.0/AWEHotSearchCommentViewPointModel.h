@interface AWEHotSearchCommentViewPointModel : AWEBaseApiModel
@property (nonatomic) NSNumber viewPointID;
@property (nonatomic) NSNumber commentCount;
@property (nonatomic) NSString viewPointText;
@property (nonatomic) NSArray comments;
@property (nonatomic) NSArray avatarUrlList;
@property (nonatomic) NSNumber position;
- (id)avatarUrlList;
- (id)viewPointID;
- (void)setAvatarUrlList:;
- (id)viewPointText;
- (void)setViewPointID:;
- (void)setViewPointText:;
- (id)position;
- (void).cxx_destruct;
- (void)setPosition:;
- (id)comments;
- (void)setComments:;
- (id)commentCount;
- (void)setCommentCount:;
+ (id)isEqualBlock;
+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
