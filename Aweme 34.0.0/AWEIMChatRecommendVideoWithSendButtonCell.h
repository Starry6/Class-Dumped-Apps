@interface AWEIMChatRecommendVideoWithSendButtonCell : AWEIMChatRecommendVideoCollectionViewCell
@property (nonatomic) DUXButton sendButton;
@property (nonatomic) DUXButton chatButton;
- (void)configWithModel:;
- (void)showGotoChatButton;
- (void)p_sendButtonClicked:;
- (id)chatButton;
- (void)p_chatButtonClicked:;
- (void)setChatButton:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupButton;
- (id)sendButton;
- (void)setSendButton:;
@end
