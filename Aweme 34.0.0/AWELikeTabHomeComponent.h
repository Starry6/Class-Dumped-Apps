@interface AWELikeTabHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) AWELikeWorkViewController likeVC;
@property (nonatomic) BOOL showLightThemeSettingView;
@property (nonatomic) BOOL shouldShowViewRecordGuide;
@property (nonatomic) q preFavoritePermission;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isViewDidAppear;
- (void)setIsViewDidAppear:;
- (id)likeVC;
- (void)setLikeVC:;
- (void)setPreFavoritePermission:;
- (long long)preFavoritePermission;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (void)onResetUI;
- (void)onClickSegmentItemAgainAtIndex:;
- (id)likeTabModel;
- (void)updateFavoriteTabIcon;
- (void)setShowLightThemeSettingView:;
- (BOOL)showLightThemeSettingView;
- (void)setShouldShowViewRecordGuide:;
- (void)setupFavoriteTabIconBind:;
- (BOOL)shouldShowViewRecordGuide;
- (void).cxx_destruct;
- (id)title;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)originalTitle;
- (void)onInit;
@end
