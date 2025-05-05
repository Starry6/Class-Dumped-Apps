@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController
@property (nonatomic) <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> delegate;
@property (nonatomic) UIKBAutoFillTestViewController testViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewDidLoad;
- (void)taggerView:didTagFormRequest:withSelectedType:;
- (void)taggerView:didTagTextFieldRequest:withSelectedType:;
- (void)taggerView:willTagRequest:;
- (long long)taggerView:selectedTypeForFormRequest:;
- (long long)taggerView:selectedTypeForTextFieldRequest:;
- (void)taggerViewDidFinish:;
- (void)_cancelBarButtonItemAction:;
- (id)initWithAutoFillTestViewController:;
- (void)_enumerateSubviewsOfRootView:usingBlock:;
- (void)_moveTaggerHighlightViewOverView:;
- (void)_removeTaggerHighlightView;
- (id)testViewController;
@end
