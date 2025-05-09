@interface AWESearchGuideSearchContainerView : UIView
@property (nonatomic) AWESearchGuideSearchSlidingTabBar slidingTabBar;
@property (nonatomic) UIButton viewMoreButton;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) AWEEcommerceGuideSearchV2Model v2model;
@property (nonatomic) q selectedTabIndex;
@property (nonatomic) BOOL isFromEcommerce;
@property (nonatomic) BOOL isNewGuideSearchWordList;
@property (nonatomic) AWESearchGSInfoModel gsInfo;
@property (nonatomic) AWESearchGuideSearchView guideSearchView;
@property (nonatomic) NSDictionary extraTrackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraTrackParams;
- (void)setExtraTrackParams:;
- (id)gsInfo;
- (void)setGsInfo:;
- (id)slidingTabBar;
- (void)setSlidingTabBar:;
- (void)trackCardShow;
- (BOOL)isNewGuideSearchWordList;
- (void)setIsNewGuideSearchWordList:;
- (void)resetResults;
- (void)setIsFromEcommerce:;
- (BOOL)isFromEcommerce;
- (void)updateWithModel:isFromEcommerce:isNewGuideSearchWordList:gsInfo:;
- (id)guideSearchView;
- (long long)getSelectedTabIndex;
- (id)getSelectedTabModel;
- (id)getGuideSearchViewModelV2;
- (void)switchToPreviousTab;
- (void)switchToNextTab;
- (void)setupDefaultData;
- (void)switchToTabIndex:;
- (id)v2model;
- (id)viewMoreButton;
- (void)trackTabJumpMoreClickWithTabIndex:tabModel:;
- (void)trackTabJumpMoreShowWithTabIndex:tabModel:;
- (void)trackTabClickWithSelectedTabIndex:enterMethod:;
- (void)setV2model:;
- (void)switchTabWithTabIndex:switchMethod:;
- (void)viewMoreButtonTapped:;
- (void)setGuideSearchView:;
- (void)setViewMoreButton:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupUI;
- (long long)selectedTabIndex;
- (void)setSelectedTabIndex:;
+ (double)guideSearchContainerHeightWithModel:;
@end
