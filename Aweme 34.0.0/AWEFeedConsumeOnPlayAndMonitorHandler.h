@interface AWEFeedConsumeOnPlayAndMonitorHandler : AWEOnPlayAndMonitorBaseHandler
- (id)referString;
- (BOOL)isFromFeed;
- (void)onPrepareToPlay:;
- (BOOL)isFromFeedOrFellow;
- (id)model;
- (void)onPlay:;
@end
