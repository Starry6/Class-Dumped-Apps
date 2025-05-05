@interface C2MetricRequestOptions : NSObject
@property (nonatomic) C allowsCellularAccess;
@property (nonatomic) C _allowsExpensiveAccess;
@property (nonatomic) C _allowsPowerNapScheduling;
@property (nonatomic) NSString _sourceApplicationBundleIdentifier;
@property (nonatomic) NSString _sourceApplicationSecondaryIdentifier;
@property (nonatomic) NSUUID metricUUID;
@property (nonatomic) C2MetricOptions metricOptions;
- (void)set_sourceApplicationSecondaryIdentifier:;
- (unsigned char)allowsCellularAccess;
- (id)metricUUID;
- (void)setMetricOptions:;
- (void)setAllowsCellularAccess:;
- (id)init;
- (unsigned char)_allowsExpensiveAccess;
- (void)set_allowsExpensiveAccess:;
- (void)setMetricUUID:;
- (void)set_allowsPowerNapScheduling:;
- (id)_sourceApplicationBundleIdentifier;
- (id)metricRequestTransportOptions;
- (id)_sourceApplicationSecondaryIdentifier;
- (void).cxx_destruct;
- (id)metricOptions;
- (id)initWithRequestOptions:;
- (unsigned char)_allowsPowerNapScheduling;
- (void)set_sourceApplicationBundleIdentifier:;
@end
