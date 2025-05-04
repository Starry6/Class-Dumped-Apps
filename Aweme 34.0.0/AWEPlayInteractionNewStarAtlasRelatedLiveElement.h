@interface AWEPlayInteractionNewStarAtlasRelatedLiveElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEFeedStarAtlasRelatedLiveInfoView relatedLiveInfoView;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)commonTrackParams;
- (void)trackClick;
- (void)viewDidDisposed;
- (void)trackADEventWithLabel:;
- (BOOL)shouldAppearWithData:;
- (void)trackDisplay;
- (id)relatedLiveInfoView;
- (void)setRelatedLiveInfoView:;
- (void)trackBarStayTime;
- (void)updateStarAtlasReviewStautsView;
- (void)trackEventWithEvent:;
- (void)relatedLiveInfoTapGR;
- (id)userID;
- (id)roomID;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (id)identifier;
- (void).cxx_destruct;
- (void)setupSubviews;
@end
