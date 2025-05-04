@interface AWEIMLiveRedPacketOpenViewController : UIViewController
@property (nonatomic) <AWEIMLiveRedPacketMessageProtocol> message;
@property (nonatomic) AWEIMLiveRedPacketOpenView openView;
@property (nonatomic) AWEIMLiveRedPacketOpenViewModel openViewModel;
- (void)p_setupUI;
- (void)p_constraintSubViews;
- (void)p_addBinds;
- (id)initWithLiveRedPacketMessage:;
- (id)openViewModel;
- (void)setOpenViewModel:;
- (id)message;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)openView;
- (void)setOpenView:;
@end
