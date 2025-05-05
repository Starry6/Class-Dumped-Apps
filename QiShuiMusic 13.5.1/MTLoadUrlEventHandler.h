@interface MTLoadUrlEventHandler : MTEventHandler
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <MTLoadUrlEventHandlerDelegate> delegate;
- (id)eventType;
- (id)knownFields;
- (id)eventVersion:;
- (id)xpSessionDuration:;
- (id)xpSamplingPercentageUsers:;
- (id)dnsServersIPAddresses:;
- (id)metricsDataWithPerfMeasurement:;
@end
