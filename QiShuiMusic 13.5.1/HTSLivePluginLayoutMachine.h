@interface HTSLivePluginLayoutMachine : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray subScenes;
@property (nonatomic) NSMapTable viewTable;
@property (nonatomic) UIView containerView;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isGiftPanelShow;
@property (nonatomic) BOOL neededLayout;
@property (nonatomic) IESLiveLayoutRoomContainer roomContainer;
@property (nonatomic) IESContainerKitEngine containerEngine;
@property (nonatomic) IESLiveRightBottomManager rightBottomManager;
@property (nonatomic) IESLiveCombineSubject rightBottomItemSubject;
@property (nonatomic) <IESLiveLayoutContainer> entranceContainer;
@property (nonatomic) <IESLiveLayoutContainer> operationContainer;
@property (nonatomic) <HTSLiveLayoutSceneProtocol> layoutScene;
@property (nonatomic) <IESLiveLayoutSceneActions> sceneActions;
@property (nonatomic) <IESLiveRouteTrackService> routeTracker;
@property (nonatomic) IESLiveRightTopManager rightTopManager;
@property (nonatomic) <IESLiveContainerKitAdapter> containerKitAdapter;
@property (nonatomic) UIView proxyContainer;
@property (nonatomic) IESLiveLayoutRoomContainer proxyRoomContainer;
@property (nonatomic) IESContainerKitEngine proxyContainerEngine;
@property (nonatomic) NSArray proxyAllowList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeSubScene:;
- (void)setLayoutScene:;
- (id)containerEngine;
- (BOOL)isGiftPanelShow;
- (id)rightTopManager;
- (void)addSubScene:;
- (void)addView:withLayoutType:;
- (void)closeRightTopViewWithItem:processResult:;
- (BOOL)containSubScene:;
- (id)containerKitAdapter;
- (id)currentRightBottomCombineSubject;
- (id)currentRightBottomItem;
- (id)currentRightTopItem;
- (void)didAutoRoateToOrientation:;
- (void)didForceUpdateToOrientation:;
- (void)didSetAttachingDIContext;
- (BOOL)enableSetNeedsLayout;
- (id)entranceContainer;
- (BOOL)getGiftPanelShow;
- (void)hideComponentsIfNeed;
- (void)hideCurrentRightBottomItem;
- (void)hideRightBottomComponents;
- (void)hideRightBottomViewWithItem:processResult:;
- (id)initWithContainer:isAnchor:diContext:;
- (BOOL)isExplainCardShowing;
- (BOOL)isProxyMode;
- (void)layoutMessageListToTop:;
- (void)layoutPluginIfNeed;
- (id)layoutScene;
- (void)moveToOriginOrProxy:;
- (BOOL)neededLayout;
- (id)operationContainer;
- (id)proxyAllowList;
- (id)proxyContainer;
- (id)proxyContainerEngine;
- (id)proxyRoomContainer;
- (void)registerBottomItemSubject;
- (void)registerClearContainer:allowList:;
- (void)registerContainer:;
- (void)registerContainers;
- (void)registerProxyContainer:inView:allowList:;
- (void)registerRunloopObserver;
- (void)reloadMultiTabMainContainer;
- (void)removeClearContainer;
- (void)removeContainers;
- (void)removeMultiTabMainContainer;
- (void)removeProxyContainer;
- (void)removeViewWithType:;
- (void)resetOriginContainer;
- (id)rightBottomItemSubject;
- (id)rightBottomManager;
- (id)roomContainer;
- (double)roomContainerBottomOffset;
- (id)routeTracker;
- (void)setContainerEngine:;
- (void)setContainerKitAdapter:;
- (void)setEntranceContainer:;
- (void)setGiftPanelShow:;
- (void)setIsAnchor:;
- (void)setIsGiftPanelShow:;
- (void)setNeededLayout:;
- (void)setOperationContainer:;
- (void)setProxyAllowList:;
- (void)setProxyContainer:;
- (void)setProxyContainerEngine:;
- (void)setProxyRoomContainer:;
- (void)setRightBottomItemSubject:;
- (void)setRightBottomManager:;
- (void)setRightTopManager:;
- (void)setRoomContainer:;
- (void)setRouteTracker:;
- (void)setSubScenes:;
- (void)setViewTable:;
- (void)showComponentsIfNeed;
- (void)showNextRightBottomItemInQueue;
- (void)showRightBottomComponents;
- (void)showRightBottomViewWithItem:processResult:;
- (void)showRightTopViewWithItem:processResult:;
- (id)subScenes;
- (void)switchToCleanMode:needReload:;
- (void)trackRightCartWithItem:isShow:;
- (void)updateBottomContainerStatus:animDuration:;
- (void)updateContainerLayoutRule:;
- (id)viewOfType:;
- (id)viewTable;
- (id)visibleViewsOfTypes:;
- (void)layoutIfNeeded;
- (void)setScene:;
- (void)addView:;
- (id)containerView;
- (void)setContainerView:;
- (void)removeView:;
- (BOOL)isAnchor;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (id)sceneActions;
- (void)setSceneActions:;
- (unsigned long long)getScene;
@end
