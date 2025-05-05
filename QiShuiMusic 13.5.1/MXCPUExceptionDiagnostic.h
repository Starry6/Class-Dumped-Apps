@interface MXCPUExceptionDiagnostic : MXDiagnostic
@property (nonatomic) MXCallStackTree callStackTree;
@property (nonatomic) NSMeasurement totalCPUTime;
@property (nonatomic) NSMeasurement totalSampledTime;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)totalCPUTime;
- (id)initWithMetaData:applicationVersion:callStack:totalCpuTime:totalSampledTime:;
- (id)callStackTree;
- (id)totalSampledTime;
+ (BOOL)supportsSecureCoding;
@end
