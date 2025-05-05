@interface AXMetricSession : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray childMetrics;
@property (nonatomic) BOOL measurementsEnabled;
@property (nonatomic) NSArray enabledByEnvironmentVariables;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (void)measure:execute:;
- (id)measure:tryExecute:;
- (id)startMeasure:;
- (BOOL)measurementsEnabled;
- (id)initWithName:measurementsEnabled:;
- (id)initWithName:measurementsEnabled:orEnabledByEnvironmentVariables:;
- (id)generateReport;
- (id)childMetrics;
- (void)setChildMetrics:;
- (void)setMeasurementsEnabled:;
- (id)enabledByEnvironmentVariables;
- (void)setEnabledByEnvironmentVariables:;
+ (BOOL)supportsSecureCoding;
@end
