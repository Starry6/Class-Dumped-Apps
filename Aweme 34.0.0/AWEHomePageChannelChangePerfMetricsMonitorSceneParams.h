@interface AWEHomePageChannelChangePerfMetricsMonitorSceneParams : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString triggerReason;
@property (nonatomic) BOOL disableEndDispatch;
@property (nonatomic) double beginTime;
- (id)initWithEvent:scene:triggerReason:disableEndDispatch:extra:;
- (void)setDisableEndDispatch:;
- (BOOL)disableEndDispatch;
- (id)sceneIdentification;
- (id)initDisableDispatchInstanceWithEvent:scene:triggerReason:;
- (id)initDefaultDispatchInstanceWithEvent:scene:triggerReason:;
- (void)setScene:;
- (id)scene;
- (void)setEvent:;
- (double)beginTime;
- (void)setBeginTime:;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)event;
- (id)copyWithZone:;
- (void)setTriggerReason:;
- (id)triggerReason;
@end
