@interface AWEPlayInteractionRelatedLiveElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEFeedRelatedSearchTipView tipsView;
@property (nonatomic) NSString visionSessionID;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)tipsView;
- (void)setTipsView:;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (void)trackOnDisplay;
- (void)updateTipsView;
- (void)setVisionSessionID:;
- (id)visionSessionID;
- (void)relatedSearchViewTapped;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (id)identifier;
- (void).cxx_destruct;
@end
