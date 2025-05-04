@interface AWEIMFriendConversationPopupViewModel : NSObject
@property (nonatomic) UIViewController viewControllerForPresentation;
@property (nonatomic) @? enableFriendConversationBlock;
@property (nonatomic) @? dismissPopupBlock;
- (id)enableFriendConversationBlock;
- (id)dismissPopupBlock;
- (void)setViewControllerForPresentation:;
- (void)setEnableFriendConversationBlock:;
- (void)setDismissPopupBlock:;
- (id)viewControllerForPresentation;
- (void).cxx_destruct;
@end
