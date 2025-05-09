@interface AWEIMQuoteMessageV2 : AWEIMMessage
@property (nonatomic) AWEURLModel urlModel;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString fileId;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSString tosKey;
@property (nonatomic) NSInteger fileType;
@property (nonatomic) BOOL contentIsAvailable;
@property (nonatomic) Q realCoverHeight;
@property (nonatomic) Q realCcoverWidth;
@property (nonatomic) NSArray templateArray;
@property (nonatomic) AWEIMLinkTextUtility textUtility;
@property (nonatomic) NSAttributedString contentTextString;
@property (nonatomic) NSAttributedString quoteTextString;
@property (nonatomic) Q coverHeight;
@property (nonatomic) Q coverWidth;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString contentText;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString refUid;
@property (nonatomic) Q outChatSceneType;
@property (nonatomic) NSString quoteTitle;
@property (nonatomic) NSAttributedString quoteAttributedContent;
@property (nonatomic) {CGSize=dd} quoteAttributedContentSize;
@property (nonatomic) NSString contentTitle;
@property (nonatomic) NSArray richTextInfos;
@property (nonatomic) NSArray linkArray;
@property (nonatomic) NSDictionary poiTrackParams;
@property (nonatomic) NSString comment;
@property (nonatomic) NSString commentID;
@property (nonatomic) q commentContentType;
@property (nonatomic) BOOL shouldShowComment;
@property (nonatomic) NSString assetId;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)secUid;
- (id)commentID;
- (void)setCommentID:;
- (id)tosKey;
- (id)getUniqueResourceId;
- (void)setSecUid:;
- (BOOL)shouldShowComment;
- (id)urlModel;
- (unsigned long long)coverWidth;
- (void)setCoverWidth:;
- (unsigned long long)coverHeight;
- (void)setCoverHeight:;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (void)setUrlModel:;
- (id)getContentDict;
- (unsigned long long)outChatSceneType;
- (id)refUid;
- (void)setRefUid:;
- (long long)commentContentType;
- (void)setCommentContentType:;
- (BOOL)isUserCellType;
- (BOOL)enableBubbleColorWithType:isQuoteReply:;
- (id)invisibleString;
- (id)makeFeedMediaDisplayModel;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (id)bubblePaddingInset:;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)linkArray;
- (id)templateArray;
- (void)setRichTextInfos:;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldChangeVisibleStatus;
- (id)itemIDUsedForContentAvailableRefresh;
- (void)setOutChatSceneType:;
- (void)setShouldShowComment:;
- (id)poiTrackParams;
- (id)calculateAttributedContent;
- (id)contentTextString;
- (id)quoteTextString;
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
- (void)setTosKey:;
- (id)md5WithUrlModel:;
- (BOOL)needFetchCommentStatus;
- (BOOL)shouldMomentUseOriginSize;
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
- (void)setPoiTrackParams:;
- (id)editingText;
- (id)quoteTitleWithMaxWidth:title:tailString:;
- (void)setContentTextString:;
- (void)setQuoteTextString:;
- (id)__senderName;
- (id)quoteTitleStringForShareAwemeWithMessage:;
- (id)quoteTitleForReplyInVideo;
- (id)quoteTitleStringForReplyWithMessage:;
- (id)quoteTitleForRecommendAwemeToFriendsWithMessage:;
- (id)p_quoteTitleForReplyGroupUnreadVideo:;
- (id)p_displayNameWithUid:scene:;
- (BOOL)p_unavailableFriendsAlbumMessage;
- (BOOL)shouldUseNowTypeOriginSize;
- (int)fileType;
- (void)setUid:;
- (id)comment;
- (id)contentAttributes;
- (void)setSecretKey:;
- (id)assetId;
- (id)uid;
- (id)extra;
- (id)uri;
- (void)setUri:;
- (id)secretKey;
- (void)setFileType:;
- (void).cxx_destruct;
- (void)setAssetId:;
- (id)copyWithZone:;
- (void)setComment:;
- (void)setMd5:;
- (id)md5;
- (void)setContentText:;
- (id)contentText;
- (id)contentTitle;
- (void)setContentTitle:;
- (id)itemId;
- (id)fileId;
- (void)setFileId:;
- (BOOL)contentIsAvailable;
- (void)setContentIsAvailable:;
- (id)urlList;
- (void)setUrlList:;
- (BOOL)shouldShowPlayIcon;
- (void)setItemId:;
+ (Class)viewModelClass;
+ (id)getSearchMsgContent:;
+ (id)getSearchMsgContentOpt:;
+ (BOOL)searchMsgAvailable:;
+ (BOOL)searchMsgCountAvailable:;
+ (BOOL)checkAweTypeSearchable:;
@end
