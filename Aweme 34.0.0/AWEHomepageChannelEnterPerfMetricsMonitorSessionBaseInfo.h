@interface AWEHomepageChannelEnterPerfMetricsMonitorSessionBaseInfo : NSObject
@property (nonatomic) NSString session;
@property (nonatomic) NSString channelId;
@property (nonatomic) q channelLoadCount;
@property (nonatomic) BOOL slidingViewWillDecelerate;
@property (nonatomic) double endTime;
@property (nonatomic) NSDictionary fpsRepresentationDictionary;
- (long long)channelLoadCount;
- (void)setChannelLoadCount:;
- (BOOL)slidingViewWillDecelerate;
- (void)setSlidingViewWillDecelerate:;
- (id)propertyDictionaryWithOutFPSRepresentation;
- (id)fpsRepresentationDictionary;
- (void)setFpsRepresentationDictionary:;
- (void)setSession:;
- (double)endTime;
- (void)setEndTime:;
- (id)session;
- (id)description;
- (void).cxx_destruct;
- (id)channelId;
- (void)setChannelId:;
@end
