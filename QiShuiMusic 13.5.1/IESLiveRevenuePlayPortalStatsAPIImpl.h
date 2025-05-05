@interface IESLiveRevenuePlayPortalStatsAPIImpl : NSObject
@property (nonatomic) BOOL shouldSenderOrAnchorPingClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)monitor_portalUserWithDuration:error:;
- (void)pr_startPing:roomId:withCompletion:;
- (void)requestGiftPortalStatsStartWith:roomId:repeatWith:;
- (void)setShouldSenderOrAnchorPingClose:;
- (BOOL)shouldSenderOrAnchorPingClose;
- (void)startSenderOrAnchorPingWithRoomId:;
- (void)stopSenderOrAnchorPing;
@end
