@interface MXHangDiagnostic : MXDiagnostic
@property (nonatomic) MXCallStackTree callStackTree;
@property (nonatomic) NSMeasurement hangDuration;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)hangDuration;
- (id)initWithMetaData:applicationVersion:callStack:hangDuration:;
- (id)callStackTree;
+ (BOOL)supportsSecureCoding;
@end
