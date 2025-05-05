@interface ARGeoTrackingTechniqueService : ARTechniqueService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)processData:;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (void)setSupportEnablementOptions:;
- (void)setVisualLocalizationCallInterval:;
- (void)technique:didOutputResultData:timestamp:context:;
- (void)setVisualLocalizationUpdatesRequested:;
- (void)setPosteriorVisualLocalizationCallInterval:;
- (void)setVisualLocalizationCallIntervalTimeThreshold:;
- (void)getLocationFromWorldPosition:reply:;
- (void)visualLocalizationCallIntervalWithReply:;
- (void)posteriorVisualLocalizationCallIntervalWithReply:;
- (void)visualLocalizationCallIntervalTimeThresholdWithReply:;
- (void)visualLocalizationUpdatesRequestedWithReply:;
- (void)supportEnablementOptionsWithReply:;
- (id)processLocationData:;
- (id)processDeviceOrientationData:;
+ (id)serviceName;
@end
