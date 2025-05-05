@interface AWEIMFeedBottomQuickEmojiInputBar : AWEIMPrivateMessageInputView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) <AWEIMFeedBottomInputBarDelegate> inputBarDelegate;
- (void)didTapTextBGView:;
- (id)inputBarDelegate;
- (void)privateMessageInputView:didTapEmoticonModel:;
- (void)privateMessageInputViewdidTapCameraButton:;
- (void)privateMessageInputViewdidTapTextArea:;
- (void)setAttributeText:placeholder:;
- (void)setInputBarDelegate:;
- (BOOL)shouldShowCameraButton;
- (void)showCameraIconIfNeeded;
- (id)init;
- (id)conversation;
- (void).cxx_destruct;
- (void)setConversation:;
+ (BOOL)enableChangeCamera;
@end
