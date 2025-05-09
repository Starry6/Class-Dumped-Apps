@interface AWEPostPageAggregateAnchorElement : AWEPostPageCellElement
@property (nonatomic) AWENewPublishAggregateAnchorTableViewCell anchorTableViewCell;
@property (nonatomic) BOOL firstShowAIAnchor;
@property (nonatomic) BOOL tradeAnchorTracked;
@property (nonatomic) DUXBottomNotification hintView;
@property (nonatomic) <AWEPostPageElementCenter> elementCenter;
@property (nonatomic) BOOL isUserDelete;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary extras;
- (id)publishAnchorArray;
- (id)poiService;
- (void)elementAppear;
- (void)bindServices:;
- (void)didSelectAnchorWithType:anchorDismissBlock:enterFromType:;
- (void)addAIAnchorWithType:anchorDismissBlock:;
- (void)didSelectExternalAnchorWithType:anchorDismissBlock:enterFromType:;
- (void)didSelectAnchorWithType:anchorDismissBlock:;
- (void)setElementCenter:;
- (void)setupCell:;
- (id)elementCenter;
- (id)localLife;
- (void)refreshWithAnchorVM:;
- (void)revertAnchorCell;
- (id)anchorTableViewCell;
- (void)configPlaceholderUI;
- (void)showAnchorLoadingIfNeeded:state:;
- (BOOL)enablePoiAnchorNotMutex;
- (void)cancelSelectedAnchorWithJustRefreshUI:;
- (BOOL)enableAggregateUIOptimize;
- (BOOL)enableAggregateAnchorUIWeaken;
- (void)didClickAnchorCell;
- (void)showAnchorPanel;
- (void)trackAggregateAnchorEntranceClick;
- (void)judgeMutexWithPOIAnchorWithCompletion:;
- (void)didClickAnchor;
- (BOOL)isUserDelete;
- (void)setIsUserDelete:;
- (BOOL)enableAnchorCheck;
- (void)updateAnchorInfo:;
- (id)mediaTypeForTrack;
- (void)cancleSelectedAnchor:;
- (void)didClickedCurrentAnchor;
- (id)companyCouponService;
- (id)gameCPService;
- (BOOL)tradeAnchorTracked;
- (void)setTradeAnchorTracked:;
- (void)addRemindViewIfNeededWithCell:;
- (id)AIAnchorModel;
- (BOOL)firstShowAIAnchor;
- (void)setFirstShowAIAnchor:;
- (void)trackAggregateAnchorEntranceShow;
- (id)textOfAnchorAccessLabel;
- (void)trackAIAnchorShow;
- (BOOL)forceReceiveEvents;
- (void)setAnchorTableViewCell:;
- (void)cleanUp;
- (void)startLoading;
- (id)service;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (BOOL)isEnabled;
- (id)extras;
- (id)cell;
- (id)hintView;
- (void)setHintView:;
- (void)addObservers;
- (void)didSelect;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
