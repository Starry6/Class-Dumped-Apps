@interface MXCrashDiagnostic : MXDiagnostic
@property (nonatomic) MXCallStackTree callStackTree;
@property (nonatomic) NSString terminationReason;
@property (nonatomic) NSString virtualMemoryRegionInfo;
@property (nonatomic) NSNumber exceptionType;
@property (nonatomic) NSNumber exceptionCode;
@property (nonatomic) NSNumber signal;
- (id)terminationReason;
- (id)signal;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)exceptionCode;
- (id)exceptionType;
- (id)callStackTree;
- (id)initWithMetaData:applicationVersion:terminationReason:applicationSpecificInfo:virtualMemoryRegionInfo:exceptionType:exceptionCode:signal:stackTrace:;
- (id)virtualMemoryRegionInfo;
+ (BOOL)supportsSecureCoding;
@end
