@interface AWECloudAlbumCreateAlbumViewController : UIViewController
@property (nonatomic) UIView accessibilityViewToback;
@property (nonatomic) AWECloudAlbumCreateAlbumView createAlbumView;
@property (nonatomic) AWECloudAlbumCreateAlbumViewConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)createAlbumViewIconImage;
- (id)createAlbumViewTitle;
- (id)createAlbumViewBtnTitle;
- (id)createAlbumViewNameContent;
- (id)createAlbumViewNamePlaceHolder;
- (BOOL)createAlbumViewBtnImageNeedShow;
- (void)createAlbumViewCloseBtnClicked;
- (void)createAlbumViewBottomBtnClickedWith:;
- (void)textFieldTextChanged:;
- (id)createAlbumView;
- (id)accessibilityViewToback;
- (void)addTapGestureToView:withSelector:;
- (void)showViewController;
- (void)setCreateAlbumView:;
- (void)setAccessibilityViewToback:;
- (void)setConfig:;
- (void)viewWillDisappear:;
- (id)init;
- (id)initWithConfig:;
- (id)config;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)dismissViewController;
- (void)keyboardWillChangeFrame:;
- (void)textFieldTextDidChange:;
@end
