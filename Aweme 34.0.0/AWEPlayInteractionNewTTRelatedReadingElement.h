@interface AWEPlayInteractionNewTTRelatedReadingElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) UIView<AWERelatedReadingBottomBarViewProtocol> ttRelatedReadingView;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (BOOL)shouldShowTTRelatedReadingBar:;
- (BOOL)showFeedBottomArticleBarSuperiorToHotSearch:;
- (BOOL)showFeedBottomArticleBarInferiorToHotSearch:;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (void)trackOnDisplay:;
- (void)updateRelatedReadingView;
- (id)ttRelatedReadingView;
- (void)setTtRelatedReadingView:;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
@end
