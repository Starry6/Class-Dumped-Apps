@interface IESLiveRevenuePlayPortalPingAPIImpl : NSObject
@property (nonatomic) BOOL shouldReceiverPingClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handlePingResultWithType:model:portalID:roomId:completion:;
- (void)monitor_portalPingWithType:portalID:duration:error:;
- (void)pr_startPingWithType:portalID:nextPingTime:roomId:;
- (void)setShouldReceiverPingClose:;
- (BOOL)shouldReceiverPingClose;
- (void)startPortalPingWithType:portalID:roomId:completion:;
- (void)stopReceiverPing;
@end
