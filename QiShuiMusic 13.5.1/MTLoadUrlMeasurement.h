@interface MTLoadUrlMeasurement : MTPerfBaseMeasurement
@property (nonatomic) NSArray eventData;
@property (nonatomic) NSArray additionalFields;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setConnectionReused:;
- (void)setStatusCode:;
- (void)setRedirectCount:;
- (void)setXpSessionDuration:;
- (void)setResolvedIPAddress:;
- (void)setXpSamplingForced:;
- (void)setEdgeNodeCacheStatus:;
- (void)mark:;
- (void)setXpSamplingPercentageUsers:;
- (void)mark:time:;
- (void)setRequestUrl:;
- (void)setDnsServersIPAddresses:;
- (void)mark:date:;
@end
