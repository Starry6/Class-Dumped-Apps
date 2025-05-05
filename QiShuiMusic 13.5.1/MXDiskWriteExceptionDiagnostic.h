@interface MXDiskWriteExceptionDiagnostic : MXDiagnostic
@property (nonatomic) MXCallStackTree callStackTree;
@property (nonatomic) NSMeasurement totalWritesCaused;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)totalWritesCaused;
- (id)initWithMetaData:applicationVersion:totalWritesCaused:stackTrace:;
- (id)callStackTree;
+ (BOOL)supportsSecureCoding;
@end
