@interface AWEAtNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSMutableAttributedString displayContent;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) IESIMAwemeModel aweme;
@property (nonatomic) IESIMURLModel imageURL;
@property (nonatomic) q subType;
@property (nonatomic) IESIMUserModel userInfo;
@property (nonatomic) IESIMCommentModel replyComment;
@property (nonatomic) IESIMCommentModel level1Comment;
@property (nonatomic) IESIMRelationDynamicLable relationLabel;
@property (nonatomic) q commentStatus;
@property (nonatomic) q itemStatus;
@property (nonatomic) NSString labelText;
@property (nonatomic) q labelType;
@property (nonatomic) IESIMIMStickerModel sticker;
@property (nonatomic) BOOL commentUnvisible;
@property (nonatomic) double contentH;
@property (nonatomic) double nameW;
@property (nonatomic) double descAndTimeH;
@property (nonatomic) NSString descAndTime;
@property (nonatomic) {CGSize=dd} deleteInfoSize;
- (void)setDescAndTime:;
- (BOOL)shouldShowCover;
- (id)accessibilityContent;
- (id)aweme;
- (long long)commentStatus;
- (BOOL)commentUnvisible;
- (double)contentH;
- (id)deleteInfoSize;
- (id)descAndTime;
- (double)descAndTimeH;
- (long long)itemStatus;
- (id)level1Comment;
- (double)nameW;
- (id)relationLabel;
- (id)replyComment;
- (id)schemaURL;
- (void)setAweme:;
- (void)setCommentStatus:;
- (void)setCommentUnvisible:;
- (void)setContentH:;
- (void)setDeleteInfoSize:;
- (void)setDescAndTimeH:;
- (void)setItemStatus:;
- (void)setLevel1Comment:;
- (void)setNameW:;
- (void)setRelationLabel:;
- (void)setReplyComment:;
- (void)setSchemaURL:;
- (BOOL)shouldEnterDetailPage;
- (BOOL)shouldShowComment;
- (id)content;
- (void)setContent:;
- (id)init;
- (id)userInfo;
- (void)setTitle:;
- (void)setLabelType:;
- (long long)labelType;
- (id)title;
- (void)setLabelText:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (long long)subType;
- (id)labelText;
- (void)setSubType:;
- (void)setImageURL:;
- (id)imageURL;
- (void)setSticker:;
- (id)sticker;
- (id)displayContent;
+ (id)awemeJSONTransformer;
+ (id)imageURLJSONTransformer;
+ (id)level1CommentJSONTransformer;
+ (long long)messageStatusForModel:;
+ (id)relationLabelJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (BOOL)shouldShowContent:;
+ (id)stickerJSONTransformer;
+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
