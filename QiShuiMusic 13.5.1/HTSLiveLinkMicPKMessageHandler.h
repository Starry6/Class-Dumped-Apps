@interface HTSLiveLinkMicPKMessageHandler : HTSLiveMessageHandler
@property (nonatomic) <HTSLinkMicPKControlProtocol> delegate;
- (void)handlePKSettingMessage:;
- (void)handleMessage:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
