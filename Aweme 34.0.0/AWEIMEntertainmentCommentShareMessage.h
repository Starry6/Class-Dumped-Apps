@interface AWEIMEntertainmentCommentShareMessage : AWEIMBaseCommentShareMessage
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) NSString yszName;
@property (nonatomic) NSString yszCid;
@property (nonatomic) NSString yszType;
@property (nonatomic) NSString commentAuthorUid;
@property (nonatomic) AWEURLModel yszCoverUrl;
@property (nonatomic) AWEURLModel commentMedia;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpUrl;
- (id)getUniqueResourceId;
- (void)setJumpUrl:;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)enableBubbleColorWithType:isQuoteReply:;
- (id)pluginsComponentsName;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (id)commentMedia;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isSupportForward;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)im_commentAvailable;
- (id)generateForwardMessage;
- (id)yszCoverUrl;
- (id)yszName;
- (id)yszCid;
- (id)yszType;
- (id)commentAuthorUid;
- (void)setYszName:;
- (void)setYszCid:;
- (void)setYszType:;
- (void)setCommentAuthorUid:;
- (void)setYszCoverUrl:;
- (void)setCommentMedia:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
