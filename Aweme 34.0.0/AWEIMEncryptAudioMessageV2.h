@interface AWEIMEncryptAudioMessageV2 : AWEIMAudioMessage
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
- (void)updateWithMessage:;
- (BOOL)isUserCellType;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isValidToDownload;
- (id)copyWithZone:;
@end
