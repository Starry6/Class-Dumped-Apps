@interface AWEHomepageChannelChangePerfMetricsMonitorSessionBaseInfo : NSObject
@property (nonatomic) NSString session;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSDictionary fpsRepresentationDictionary;
- (id)propertyDictionaryWithOutFPSRepresentation;
- (id)fpsRepresentationDictionary;
- (void)setFpsRepresentationDictionary:;
- (void)setSession:;
- (double)endTime;
- (void)setEndTime:;
- (double)beginTime;
- (id)session;
- (void)setBeginTime:;
- (id)description;
- (void).cxx_destruct;
@end
