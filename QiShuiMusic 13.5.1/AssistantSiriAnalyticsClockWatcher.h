@interface AssistantSiriAnalyticsClockWatcher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_triggerSiriAccountInformation;
- (void)whiteRose:willCreateRootClock:completion:;
- (void)whiteRose:derivativeClockCreated:rootClock:;
- (void)whiteRose:rootClockDestroyed:completion:;
- (void)whiteRose:rootClockCreated:trailingRootClock:;
- (void).cxx_destruct;
- (void)_triggerDeviceFixedContextOnStreamUUID:;
- (id)initWithInternalTelemetry:sensitiveConditionsObservers:clientMessageStream:preprocessor:;
@end
