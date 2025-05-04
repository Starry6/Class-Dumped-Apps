@interface AWEPrivateAccountInfoViewController : UIViewController
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) <AWEPrivateAccountInfoViewControllerDelegate> delegate;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSString teenModeTitle;
@property (nonatomic) NSString teenModeInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweui_emptyPageConfigForState:;
- (id)aweui_emptyPageEdgeInsets;
- (id)teenModeTitle;
- (id)teenModeInfo;
- (void)setTeenModeTitle:;
- (void)setTeenModeInfo:;
- (id)user;
- (void)setUser:;
- (void)setScrollView:;
- (id)delegate;
- (void)viewDidLoad;
- (id)scrollView;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)updateUI;
@end
