@interface AWELiveShelfMoreOptionViewController : UIViewController
@property (nonatomic) AWELiveShelfMoreOptionView moreOptionView;
@property (nonatomic) UIView tapToCloseView;
@property (nonatomic) NSArray items;
@property (nonatomic) @? onClose;
- (void)tapToClose;
- (id)tapToCloseView;
- (id)moreOptionView;
- (void)setTapToCloseView:;
- (void)setMoreOptionView:;
- (void)showOptionViewWithOrigin:onView:;
- (id)initWithItems:;
- (BOOL)isShowing;
- (id)items;
- (void)setItems:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setupViews;
- (id)contentViewSize;
- (id)onClose;
- (void)setOnClose:;
- (void)dismissSelf;
@end
