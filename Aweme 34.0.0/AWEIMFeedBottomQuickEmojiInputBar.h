@interface AWEIMFeedBottomQuickEmojiInputBar : AWEIMPrivateMessageInputView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString fastReplyType;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) <AWEIMFeedBottomInputBarDelegate> inputBarDelegate;
@property (nonatomic) UIStackView rightButtonsContainer;
- (void)layoutSubviews;
- (void)setAttributeText:placeholder:;
- (void)setFastReplyType:;
- (id)fastReplyType;
- (void)didTapTextBGView:;
- (id)inputBarDelegate;
- (void)privateMessageInputViewdidTapCameraButton:;
- (void)privateMessageInputView:didTapEmoticonModel:index:;
- (void)privateMessageInputViewdidTapTextArea:;
- (void)setInputBarDelegate:;
- (BOOL)shouldShowCameraButton;
- (id)init;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end
