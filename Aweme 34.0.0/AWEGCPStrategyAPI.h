@interface AWEGCPStrategyAPI : NSObject
@property (nonatomic) IESGCPApi api;
- (void)requestImpressionReportWithItemIds:contentType:channelId:completion:;
- (void)requestStrategyListWithGameId:tabId:lastVideoOffset:lastLiveOffset:count:isChoicenessContent:completion:;
- (id)videoItemWithString:;
- (id)liveItem:;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:;
@end
