@interface MXAppLaunchDiagnostic : MXDiagnostic
@property (nonatomic) MXCallStackTree callStackTree;
@property (nonatomic) NSMeasurement launchDuration;
- (id)toDictionary;
- (id)launchDuration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithMetaData:applicationVersion:callStack:launchDuration:;
- (id)callStackTree;
+ (BOOL)supportsSecureCoding;
@end
