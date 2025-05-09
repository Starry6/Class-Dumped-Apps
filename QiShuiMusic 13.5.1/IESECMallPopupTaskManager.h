@interface IESECMallPopupTaskManager : NSObject
@property (nonatomic) NSMapTable bubbleTable;
@property (nonatomic) IESECMallPopupTaskContainer containerView;
@property (nonatomic) NSMutableDictionary popupGroup;
@property (nonatomic) NSMapTable popupTable;
- (void)setBubbleTable:;
- (void)dismissAllPopup;
- (id)addPopupTaskWithTaskConfig:delegate:;
- (long long)allVisibleBubblesCount;
- (id)bubbleTable;
- (void)bubbleView:resetVisibility:;
- (void)bubbleView:updateLynxData:;
- (id)bubbleViewWithUniqueId:;
- (id)currentVisibleBubbles;
- (id)currentVisiblePopupViews;
- (id)defaultGroup;
- (void)dismissAllEmptyHolderPopup;
- (void)dismissBubbleView:;
- (void)dismissPopupView:;
- (id)initWithRootContainer:;
- (id)layoutInfoFromParams:;
- (id)popupGroup;
- (id)popupTable;
- (void)removeAllBubbles;
- (void)removeAllBubblesInMallRefresh;
- (void)removeAllCollisionBubbles:at:anchorView:;
- (void)setPopupGroup:;
- (void)setPopupTable:;
- (void)setupPopupTaskContainer:;
- (id)showBubbleWithAnchor:container:params:delegate:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)executeTask:;
+ (id)getUnqiueID;
@end
