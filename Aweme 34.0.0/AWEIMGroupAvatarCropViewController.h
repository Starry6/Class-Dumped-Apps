@interface AWEIMGroupAvatarCropViewController : TOCropViewController
@property (nonatomic) UIView<IESIMTextLoadingViewProtocol> loadingView;
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowInnerPush;
- (void)cropViewController:didCropToImage:withRect:angle:button:;
- (void)cropViewController:didFinishCancelled:;
- (id)frameForCropViewWithVerticalLayout:;
- (void)viewWillDisappear:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)setCancelBlock:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void).cxx_destruct;
- (id)cancelBlock;
- (void)setupUI;
+ (id)showAvatarCropWithImage:completionBlock:;
+ (id)showAvatarCropWithImage:animation:completionBlock:cancelBlock:;
@end
