@interface IESECGoodsDetailLiveReplayFloatEntryEventHandler : IESECGoodsDetailEventHandler
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
- (void)openLiveRoom;
- (void)openReplayPage;
- (void)trackClose;
- (void)trackShow;
+ (id)eventComponentID;
@end
