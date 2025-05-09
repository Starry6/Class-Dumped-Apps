@interface IESIMCommentModel : IESIMBaseApiModel
@property (nonatomic) NSMutableAttributedString displayContent;
@property (nonatomic) NSString commentID;
@property (nonatomic) NSString content;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) NSNumber diggCount;
@property (nonatomic) q status;
@property (nonatomic) IESIMUserModel author;
@property (nonatomic) NSArray authorInteractionLabelArray;
@property (nonatomic) BOOL likedByCreator;
@property (nonatomic) BOOL needShowChangeUserNameTips;
@property (nonatomic) NSString replyID;
@property (nonatomic) NSString replySubCommentID;
@property (nonatomic) NSString replySubCommentAutherName;
@property (nonatomic) q tagType;
@property (nonatomic) NSString tagText;
@property (nonatomic) NSString tagColor;
@property (nonatomic) NSString tagTextColor;
@property (nonatomic) NSString tagURL;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) BOOL userBuried;
@property (nonatomic) NSArray replyComments;
@property (nonatomic) NSArray textExtras;
@property (nonatomic) BOOL isPin;
@property (nonatomic) BOOL isAdComment;
@property (nonatomic) BOOL isVideoTitle;
@property (nonatomic) BOOL disableAdTag;
@property (nonatomic) NSString adLinkText;
@property (nonatomic) IESIMAwemeModel model;
@property (nonatomic) IESIMRelationDynamicLable relationLabel;
@property (nonatomic) NSString repostId;
@property (nonatomic) NSNumber subCommentCount;
@property (nonatomic) NSString replyUserId;
@property (nonatomic) NSString commentShowVV;
@property (nonatomic) IESIMIMStickerModel sticker;
@property (nonatomic) BOOL isReplyWithVideo;
@property (nonatomic) IESIMAwemeModel replyVideoModel;
@property (nonatomic) NSString itemUserID;
@property (nonatomic) double commentH;
@property (nonatomic) double replyH;
@property (nonatomic) {CGSize=dd} nameSize;
@property (nonatomic) {CGSize=dd} replyNameSize;
@property (nonatomic) {CGSize=dd} timeSize;
@property (nonatomic) q replyStyle;
@property (nonatomic) BOOL isSubComment;
@property (nonatomic) BOOL useV2API;
@property (nonatomic) NSNumber showCollapseCount;
@property (nonatomic) NSString labelInfo;
@property (nonatomic) IESIMCommentSurpriseEggModel commentEasterEgg;
@property (nonatomic) BOOL isDuplicate;
- (id)awemeID;
- (id)replyVideoModel;
- (void)setIsAdComment:;
- (void)setReplyUserId:;
- (id)subCommentCount;
- (id)tagText;
- (id)accessibilityContent;
- (id)adLinkText;
- (id)authorInteractionLabelArray;
- (id)commentEasterEgg;
- (double)commentH;
- (id)commentID;
- (id)commentShowVV;
- (id)diggCount;
- (BOOL)disableAdTag;
- (id)firstAuthorInteractionLabel;
- (id)firstReplyComment;
- (BOOL)isAdComment;
- (BOOL)isPin;
- (BOOL)isReplyWithVideo;
- (BOOL)isSubComment;
- (BOOL)isVideoTitle;
- (id)itemUserID;
- (BOOL)likedByCreator;
- (id)nameSize;
- (BOOL)needShowChangeUserNameTips;
- (id)relationLabel;
- (id)replyComments;
- (double)replyH;
- (id)replyNameSize;
- (long long)replyStyle;
- (id)replySubCommentAutherName;
- (id)replySubCommentID;
- (id)replyUserId;
- (id)repostId;
- (void)setAdLinkText:;
- (void)setAwemeID:;
- (void)setCommentEasterEgg:;
- (void)setCommentH:;
- (void)setCommentID:;
- (void)setCommentShowVV:;
- (void)setDiggCount:;
- (void)setDisableAdTag:;
- (void)setIsPin:;
- (void)setIsSubComment:;
- (void)setIsVideoTitle:;
- (void)setItemUserID:;
- (void)setLikedByCreator:;
- (void)setNameSize:;
- (void)setNeedShowChangeUserNameTips:;
- (void)setRelationLabel:;
- (void)setReplyComments:;
- (void)setReplyH:;
- (void)setReplyID:;
- (void)setReplyNameSize:;
- (void)setReplyStyle:;
- (void)setReplySubCommentAutherName:;
- (void)setReplySubCommentID:;
- (void)setReplyVideoModel:;
- (void)setRepostId:;
- (void)setShowCollapseCount:;
- (void)setSubCommentCount:;
- (void)setTagText:;
- (void)setTagTextColor:;
- (void)setTagURL:;
- (void)setTextExtras:;
- (void)setTimeSize:;
- (void)setUseV2API:;
- (void)setUserBuried:;
- (void)setUserDigged:;
- (id)showCollapseCount;
- (id)tagTextColor;
- (id)tagURL;
- (id)textExtras;
- (id)timeSize;
- (BOOL)useV2API;
- (BOOL)userBuried;
- (BOOL)userDigged;
- (id)model;
- (id)content;
- (long long)tagType;
- (void)setStatus:;
- (void)setContent:;
- (id)init;
- (void)setModel:;
- (id)createTime;
- (id)author;
- (BOOL)isDuplicate;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setCreateTime:;
- (long long)status;
- (id)labelInfo;
- (void)setLabelInfo:;
- (void)setSticker:;
- (void)setIsDuplicate:;
- (void)setTagType:;
- (id)sticker;
- (id)replyID;
- (id)displayContent;
- (id)tagColor;
- (void)setTagColor:;
+ (id)authorInteractionLabelArrayJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)replyCommentsJSONTransformer;
+ (id)replyVideoModelJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)stickerJSONTransformer;
+ (id)textExtrasJSONTransformer;
+ (id)userDiggedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
