@interface AWEProfileTabMergedComponent : AWEProfileBaseComponent
@property (nonatomic) NSMutableDictionary enteredStatusMap;
@property (nonatomic) BOOL needRedirectToPostTab;
@property (nonatomic) q lastRecordTabType;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL needShowRecycledWorks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didDeleteAweme:;
- (BOOL)isViewAppeared;
- (void)setIsViewAppeared:;
- (id)guideManager;
- (void)recordEnteredByNewEntrance:user:;
- (void)recordGuidePopoverShown:user:;
- (BOOL)isContainerViewAppeared;
- (void)handleGuideTabRemoveNotification:;
- (long long)lastRecordTabType;
- (id)enteredStatusMap;
- (void)favoriteGuideAnimation;
- (void)privatePostGuideAnimation;
- (void)setLastRecordTabType:;
- (BOOL)needShowRecycledWorks;
- (void)setNeedShowRecycledWorks:;
- (BOOL)needRedirectToPostTab;
- (void)setNeedRedirectToPostTab:;
- (void)redirectToPostWorkTab;
- (void)trackEnterNewEntrance:user:;
- (void)tabRemoveAnimation:targetFrame:completed:;
- (void)setEnteredStatusMap:;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (BOOL)isCurrentUser;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
@end
