@interface IESECPdpHeaderSliceEventHandler : IESECGoodsDetailSliceXEventHandler
@property (nonatomic) IESECGoodsDetailHeaderServiceProvider headerServiceProvider;
@property (nonatomic) <IESECGoodsDetailHeaderEventHandlerService> handler;
@property (nonatomic) <IESECGoodsDetailHeaderTrackerService> trackerImpl;
- (void)setTrackerImpl:;
- (id)headerServiceProvider;
- (void)setHeaderServiceProvider:;
- (id)trackerImpl;
- (void)triggerEvent:;
- (void)triggerHeadFeedbackWithAction:activeView:completion:;
- (void)triggerHeadJumpWithAction:activeView:completion:;
- (void)triggerHeadPreviewWithAction:activeView:completion:;
- (void)triggerHeadScrollToIndexWithAction:activeView:completion:;
- (void)triggerHeadTrackWithAction:activeView:completion:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)initWithServiceProvider:;
@end
