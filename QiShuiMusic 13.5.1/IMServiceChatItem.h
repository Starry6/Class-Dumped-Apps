@interface IMServiceChatItem : IMTranscriptChatItem
@property (nonatomic) IMServiceImpl service;
@property (nonatomic) IMHandle handle;
@property (nonatomic) BOOL stewieSharingChat;
- (id)handle;
- (id)service;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isStewieSharingChat;
- (id)_initWithItem:service:handle:;
- (void)setStewieSharingChat:;
@end
