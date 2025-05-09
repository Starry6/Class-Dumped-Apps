@interface IESECMallPopupTaskView : IESECMallPopupTaskBaseView
@property (nonatomic) IESECLynxCard popupView;
@property (nonatomic) UIView maskView;
@property (nonatomic) BOOL lynxViewDidLoad;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL showInWindow;
@property (nonatomic) Q lastPageVisibleStatus;
@property (nonatomic) IESECMallLynxRenderMonitor lynxRenderMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)lynxViewDidLoad;
- (id)rootGlobalExtra;
- (id)currentBridgeCallHanderForCards;
- (BOOL)pageDidAppeared;
- (void)addMaskView;
- (void)createLynxCard;
- (id)curLogPageName;
- (void)currentCardsWriteAlogMethodName:paramModel:result:context:;
- (id)currentListContextIdForCards;
- (id)currentListHomePageView;
- (id)globalExtra;
- (id)globalXBridges;
- (id)hybridMonitorContext;
- (id)initWithPopupConfig:delegate:uniqueId:;
- (unsigned long long)lastPageVisibleStatus;
- (void)lynxCard:didFinishLoadWithURL:;
- (void)lynxCard:didLoadFail:;
- (void)lynxCard:didUpdateDataWithLynxViewFromType:perfDict:;
- (void)lynxCard:receiveError:;
- (void)lynxCard:sizeDidChanged:;
- (BOOL)lynxCardEnableForest;
- (id)lynxRenderMonitor;
- (void)maskTapAction;
- (id)popupView;
- (void)sendPageVisibilityChangeEvent:;
- (void)setDidAppear:;
- (void)setGreyStyle;
- (void)setLastPageVisibleStatus:;
- (void)setLynxRenderMonitor:;
- (void)setLynxViewDidLoad:;
- (void)setPopupView:;
- (void)setShowInWindow:;
- (void)showInView:zIndex:;
- (BOOL)showInWindow;
- (void)showInWindowWithZIndex:;
- (void)showLynxCardWithAnimation;
- (void)viewDidFirstScreen:;
- (void)appWillEnterForeground:;
- (void)dismiss;
- (void)dealloc;
- (void)appDidEnterBackground:;
- (id)maskView;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (BOOL)didAppear;
- (void)setMaskView:;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)addObservers;
@end
