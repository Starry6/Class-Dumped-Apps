@interface IESECLiveUserTrackerWidget : IESECLiveBaseWidget
@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL shopCartShowed;
@property (nonatomic) BOOL didEnter;
@property (nonatomic) IESECUserTrackerPageContext pageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)widgetDidAppear;
- (void)addLiveRoomInfoToContext;
- (BOOL)didEnter;
- (void)didHideShopCart:;
- (void)didShowShopCart:;
- (void)enterECRoomAndCallUserTracker;
- (id)initWithRoom:roomContext:;
- (void)leaveECRoomAndCallUserTracker;
- (void)postAction:type:atPage:;
- (void)setDidEnter:;
- (void)setShopCartShowed:;
- (BOOL)shopCartShowed;
- (void)widgetDidDisappear;
- (void)widgetUnmount;
- (void).cxx_destruct;
- (BOOL)appeared;
- (void)setAppeared:;
- (id)pageContext;
- (void)setPageContext:;
@end
