@interface IESLiveMessageListReplyChatCell : IESLiveMessageListBaseCell
@property (nonatomic) UIView messagesContainer;
@property (nonatomic) IESLiveMessageLabel repliedContentLabel;
- (id)messagesContainer;
- (BOOL)needLoadMessageTextLabel;
- (void)refreshWith:;
- (id)repliedContentLabel;
- (void)setMessagesContainer:;
- (void)setRepliedContentLabel:;
- (void).cxx_destruct;
- (void)setupView;
@end
