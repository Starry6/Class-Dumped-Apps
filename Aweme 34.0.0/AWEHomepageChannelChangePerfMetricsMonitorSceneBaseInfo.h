@interface AWEHomepageChannelChangePerfMetricsMonitorSceneBaseInfo : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSString triggerReason;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) double cancelTime;
- (id)sceneIdentification;
- (double)cancelTime;
- (void)setCancelTime:;
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
