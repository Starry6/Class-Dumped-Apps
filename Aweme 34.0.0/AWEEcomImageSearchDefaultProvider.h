@interface AWEEcomImageSearchDefaultProvider : NSObject
@property (nonatomic) UIViewController<AWESearchPhotoSearchResultViewControllerProtocol> resultViewController;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIScrollView contentScrollView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setResultViewController:;
- (id)resultViewController;
- (void)invokeImageSearchWithParams:;
- (void)backToScrollViewTop;
- (void)imageSearchViewFirstAppearWithParams:;
- (id)imageSearchContentViewWithParams:completion:;
- (id)contentView;
- (id)contentScrollView;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)viewDidAppear:;
+ (id)createImageSearchProvider;
@end
