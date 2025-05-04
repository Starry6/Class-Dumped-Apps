@interface AWEHomepageChannelEnterPerfMetricsMonitorSceneBaseInfo : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSString triggerReason;
@property (nonatomic) double fpsBeginTime;
@property (nonatomic) double beginTime;
@property (nonatomic) NSString fromChannelId;
@property (nonatomic) NSString toChannelId;
@property (nonatomic) double endTime;
@property (nonatomic) double cancelTime;
- (void)setFromChannelId:;
- (void)setToChannelId:;
- (id)fromChannelId;
- (id)toChannelId;
- (double)cancelTime;
- (void)setCancelTime:;
- (double)fpsBeginTime;
- (void)setFpsBeginTime:;
- (void)setScene:;
- (id)propertyDictionary;
- (double)endTime;
- (id)scene;
- (void)setEndTime:;
- (double)beginTime;
- (void)setBeginTime:;
- (id)description;
- (void).cxx_destruct;
- (void)setTriggerReason:;
- (id)triggerReason;
@end
