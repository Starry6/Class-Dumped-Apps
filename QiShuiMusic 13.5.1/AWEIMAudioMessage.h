@interface AWEIMAudioMessage : AWEIMMessage
@property (nonatomic) AWEIMMessageContent<AWEIMMessageAudioContentProtocol> content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getContent;
- (id)getContentDict;
- (id)initWithContentDict:;
- (BOOL)isAttachmentAtLocal;
- (BOOL)isAttachmentAtRemote;
- (BOOL)isAttachmentMessage;
- (BOOL)isValidToDownload;
- (void)updateWithMessage:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
