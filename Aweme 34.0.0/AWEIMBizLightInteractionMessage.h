@interface AWEIMBizLightInteractionMessage : AWEIMMessage
@property (nonatomic) AWEIMLinkTextUtility textUtility;
@property (nonatomic) NSArray templateArray;
@property (nonatomic) AWEURLModel urlModel;
@property (nonatomic) NSString md5;
@property (nonatomic) BOOL contentIsAvailable;
@property (nonatomic) Q realCoverHeight;
@property (nonatomic) Q realCcoverWidth;
@property (nonatomic) NSString objectTitle;
@property (nonatomic) NSString subjectTitle;
@property (nonatomic) NSString objectTitleV2;
@property (nonatomic) NSString subjectTitleV2;
@property (nonatomic) Q coverHeight;
@property (nonatomic) Q coverWidth;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString contentText;
@property (nonatomic) NSString contentTitle;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString quoteTitle;
@property (nonatomic) NSAttributedString quoteAttributedContent;
@property (nonatomic) {CGSize=dd} quoteAttributedContentSize;
@property (nonatomic) q sceneType;
@property (nonatomic) NSString comment;
@property (nonatomic) NSString commentID;
@property (nonatomic) q commentContentType;
@property (nonatomic) Q refType;
@property (nonatomic) NSAttributedString commentCopyText;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSArray richTextInfos;
@property (nonatomic) BOOL shouldShowComment;
@property (nonatomic) NSString objectTitleText;
@property (nonatomic) NSString subjectTitleText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString fileId;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSInteger fileType;
@property (nonatomic) NSString assetId;
@property (nonatomic) NSDictionary extra;
- (void)setEnterFrom:;
- (void)setExtra:;
- (id)enterFrom;
- (id)secUid;
- (id)commentID;
- (void)setCommentID:;
- (void)setSecUid:;
- (BOOL)shouldShowComment;
- (id)urlModel;
- (unsigned long long)refType;
- (unsigned long long)coverWidth;
- (void)setCoverWidth:;
- (unsigned long long)coverHeight;
- (void)setCoverHeight:;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (void)setUrlModel:;
- (id)getContentDict;
- (long long)commentContentType;
- (void)setCommentContentType:;
- (BOOL)isUserCellType;
- (BOOL)enableBubbleColorWithType:isQuoteReply:;
- (id)invisibleString;
- (id)makeFeedMediaDisplayModel;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (void)setCommentCopyText:;
- (id)commentCopyText;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)templateArray;
- (void)setRichTextInfos:;
- (BOOL)shouldChangeVisibleStatus;
- (id)itemIDUsedForContentAvailableRefresh;
- (void)setShouldShowComment:;
- (id)calculateAttributedContent;
- (void)updateUrlModelWithUrlModel:;
- (id)quoteAttributedContent;
- (id)richTextInfos;
- (void)setQuoteAttributedContent:;
- (id)quoteTitle;
- (void)setQuoteTitle:;
- (void)setTemplateArray:;
- (unsigned long long)realCoverHeight;
- (void)setRealCoverHeight:;
- (unsigned long long)realCcoverWidth;
- (void)setRealCcoverWidth:;
- (void)setRefType:;
- (void)setObjectTitle:;
- (void)setSubjectTitle:;
- (void)setSubjectTitleV2:;
- (void)setObjectTitleV2:;
- (id)objectTitleV2;
- (id)subjectTitleV2;
- (void)setObjectTitleText:;
- (void)setSubjectTitleText:;
- (id)objectTitle;
- (id)subjectTitle;
- (id)md5WithUrlModel:;
- (BOOL)needFetchCommentStatus;
- (BOOL)shouldMomentUseOriginSize;
- (id)subjectTitleText;
- (id)objectTitleText;
- (BOOL)p_unavaliableDousanMessage;
- (BOOL)shouldShowAuthorInfo;
- (double)preferQuoteTitleMaxWidth;
- (BOOL)shouldShowBriefCommentLabel;
- (BOOL)shouldShowCommentLabel;
- (BOOL)isCommentAvailable;
- (id)quoteAttributedContentSize;
- (void)setQuoteAttributedContentSize:;
- (BOOL)needShowContentModeCenter;
- (id)textUtility;
- (void)setTextUtility:;
- (int)fileType;
- (void)setUid:;
- (id)comment;
- (id)contentAttributes;
- (id)assetId;
- (id)uid;
- (id)extra;
- (id)uri;
- (void)setUri:;
- (id)secretKey;
- (void).cxx_destruct;
- (void)setAssetId:;
- (id)copyWithZone:;
- (void)setComment:;
- (void)setMd5:;
- (id)md5;
- (void)setContentText:;
- (id)contentText;
- (long long)sceneType;
- (void)setSceneType:;
- (id)contentTitle;
- (void)setContentTitle:;
- (id)itemId;
- (id)fileId;
- (BOOL)contentIsAvailable;
- (void)setContentIsAvailable:;
- (id)urlList;
- (void)setUrlList:;
- (BOOL)shouldShowPlayIcon;
- (void)setItemId:;
+ (Class)viewModelClass;
@end
