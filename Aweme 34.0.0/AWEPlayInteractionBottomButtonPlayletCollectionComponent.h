@interface AWEPlayInteractionBottomButtonPlayletCollectionComponent : NSObject
@property (nonatomic) AWECommonButtonInfoModel infoModel;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) NSDictionary playletCollectionStrategy;
@property (nonatomic) AWEPlayInteractionPlayletCollectionView collectionView;
@property (nonatomic) @? workItem;
@property (nonatomic) DUXBottomNotification bottomNotification;
@property (nonatomic) BOOL appear;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isPageDisappear;
@property (nonatomic) BOOL enableShowCollectionButton;
@property (nonatomic) BOOL disableRecordForTransition;
@property (nonatomic) BOOL needReverse;
@property (nonatomic) AWEPlayInteractionBottomButtonCollectionComponentContainerView containerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q avoidStatus;
@property (nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> btnContext;
@property (nonatomic) <AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;
- (void)viewController_willDisplay;
- (long long)activateType;
- (void)viewController_viewWillAppear;
- (void)setAppear:;
- (id)infoModel;
- (id)bottomNotification;
- (void)setBottomNotification:;
- (long long)avoidStatus;
- (void)setAvoidStatus:;
- (id)componentDelegate;
- (void)setComponentDelegate:;
- (id)initWithModel:context:;
- (void)setInfoModel:;
- (void)trackShow;
- (BOOL)needReverse;
- (void)setNeedReverse:;
- (id)workItem;
- (void)setWorkItem:;
- (id)btnContext;
- (void)setBtnContext:;
- (void)requestCollected;
- (void)postNotificationWithType:;
- (void)collectionStatusChangedNoti:;
- (void)showBottomNoti;
- (void)collectionAction;
- (void)cancelWorkItem;
- (void)trackCollectionAction;
- (void)setPlayletCollectionStrategy:;
- (BOOL)shouldShowPlayletCollectionButton;
- (BOOL)isPageDisappear;
- (BOOL)enableShowCollectionButton;
- (BOOL)shouldShowAtPlayTime;
- (void)showPlayletCollectionButton;
- (void)setIsPageDisappear:;
- (void)syncStateIfNeed;
- (void)caculateCollectionButtonState:;
- (void)trackClickCollectEvent;
- (id)playletCollectionStrategy;
- (void)setDisableRecordForTransition:;
- (void)updateElementState;
- (void)setEnableShowCollectionButton:;
- (BOOL)shouldShowButtonForPlaylet:;
- (BOOL)hasShowAboveTimes:;
- (BOOL)hasCollectionPlaylet:;
- (BOOL)disableRecordForTransition;
- (void)playInteractionPlayletCollectionViewDidTapCollection:;
- (void)playInteractionPlayletCollectionView:stateChanged:;
- (id)collectionView;
- (BOOL)isShowing;
- (void)setup;
- (id)containerView;
- (id)buttonView;
- (void)setCollectionView:;
- (void)setContainerView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (BOOL)appear;
- (BOOL)hasShown;
- (void)setHasShown:;
- (void)setIsShowing:;
+ (BOOL)shouldShowButtonForModel:context:;
@end
