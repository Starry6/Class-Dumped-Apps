@interface IESECMallBubbleView : UIView
@property (nonatomic) IESECLynxCard bubbleView;
@property (nonatomic) BOOL lynxViewDidLoad;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) Q lastPageVisibleStatus;
@property (nonatomic) IESECMallBubbleCardModel cardModel;
@property (nonatomic) IESECMallBubbleViewLayout layout;
@property (nonatomic) UIView anchorView;
@property (nonatomic) UIView parentView;
@property (nonatomic) @ anchorDeallocObserver;
@property (nonatomic) <IESECMallPopupDelegate> delegate;
@property (nonatomic) IESECMallLynxRenderMonitor lynxRenderMonitor;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) NSNumber delayRefreshRemoveCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)lynxViewDidLoad;
- (id)rootGlobalExtra;
- (void)updateLynxData:;
- (void)bindAnchorView:;
- (id)currentBridgeCallHanderForCards;
- (BOOL)pageDidAppeared;
- (id)anchorDeallocObserver;
- (id)cardModel;
- (void)createLynxCard;
- (id)curLogPageName;
- (void)currentCardsWriteAlogMethodName:paramModel:result:context:;
- (id)currentListContextIdForCards;
- (id)currentListHomePageView;
- (id)delayRefreshRemoveCount;
- (id)globalExtra;
- (id)globalXBridges;
- (id)hybridMonitorContext;
- (id)initWithCardModel:layoutInfo:delegate:;
- (unsigned long long)lastPageVisibleStatus;
- (void)layoutBubbleView;
- (void)lynxCard:didFinishLoadWithURL:;
- (void)lynxCard:didLoadFail:;
- (void)lynxCard:didUpdateDataWithLynxViewFromType:perfDict:;
- (void)lynxCard:sizeDidChanged:;
- (BOOL)lynxCardEnableForest;
- (id)lynxRenderMonitor;
- (void)removeAllConstraints;
- (void)resetVisibility:;
- (void)sendPageVisibilityChangeEvent:;
- (void)setAnchorDeallocObserver:;
- (void)setCardModel:;
- (void)setDelayRefreshRemoveCount:;
- (void)setDidAppear:;
- (void)setGreyStyle;
- (void)setLastPageVisibleStatus:;
- (void)setLynxRenderMonitor:;
- (void)setLynxViewDidLoad:;
- (void)showInView:anchorView:;
- (void)viewDidFirstScreen:;
- (void)appWillEnterForeground:;
- (void)dismiss;
- (void)dealloc;
- (id)uniqueId;
- (void)appDidEnterBackground:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (void)setLayout:;
- (void)setUniqueId:;
- (id)hitTest:withEvent:;
- (id)layout;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)didAppear;
- (void)viewDidAppear;
- (id)anchorView;
- (void)setAnchorView:;
- (id)parentView;
- (void)setParentView:;
- (id)bubbleView;
- (void)setBubbleView:;
- (void)viewDidDisappear;
- (void)addObservers;
@end
