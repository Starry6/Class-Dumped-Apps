@interface IESLiveMultiKTVStreamLayout : IESLiveMultiAudioStreamLayout
- (id)seiRegionFrom:session:userService:;
- (void)updateLayoutOfPublisher:withSessions:withUserService:mediaConfig:;
@end
