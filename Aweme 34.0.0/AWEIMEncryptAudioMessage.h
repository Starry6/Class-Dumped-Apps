@interface AWEIMEncryptAudioMessage : AWEIMMessage
@property (nonatomic) AWEIMMessageContent<AWEIMMessageAudioContentProtocol> content;
@property (nonatomic) UIBezierPath audioPowerPath;
@property (nonatomic) {CGSize=dd} audioPowerPathSize;
@property (nonatomic) {CGSize=dd} quoteTitleSize;
@property (nonatomic) {CGSize=dd} quoteContentSize;
@property (nonatomic) NSString audioText;
@property (nonatomic) BOOL hasPrefetchText;
@property (nonatomic) AWEIMMessage quotedMsg;
@property (nonatomic) IESIMExternalRefContent externalRef;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContent;
- (id)getContentDict;
- (void)updateWithMessage:;
- (BOOL)isAttachmentAtLocal;
- (id)externalRef;
- (void)setExternalRef:;
- (BOOL)isUserCellType;
- (id)invisibleString;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)generateForwardMessage;
- (BOOL)isAttachmentAtRemote;
- (BOOL)isValidToDownload;
- (id)audioPowerPath;
- (void)setAudioPowerPath:;
- (id)audioPowerPathSize;
- (void)setAudioPowerPathSize:;
- (id)quoteTitleSize;
- (void)setQuoteTitleSize:;
- (id)quoteContentSize;
- (void)setQuoteContentSize:;
- (id)audioText;
- (void)setAudioText:;
- (BOOL)hasPrefetchText;
- (void)setHasPrefetchText:;
- (id)quotedMsg;
- (void)setQuotedMsg:;
- (BOOL)isAttachmentMessage;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)contentIsAvailable;
@end
