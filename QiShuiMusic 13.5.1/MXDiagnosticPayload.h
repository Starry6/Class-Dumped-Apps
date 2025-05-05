@interface MXDiagnosticPayload : NSObject
@property (nonatomic) NSArray cpuExceptionDiagnostics;
@property (nonatomic) NSArray diskWriteExceptionDiagnostics;
@property (nonatomic) NSArray hangDiagnostics;
@property (nonatomic) NSArray appLaunchDiagnostics;
@property (nonatomic) NSArray crashDiagnostics;
@property (nonatomic) NSDate timeStampBegin;
@property (nonatomic) NSDate timeStampEnd;
- (id)JSONRepresentation;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)timeStampBegin;
- (id)timeStampEnd;
- (id)initWithTimeStampBegin:withTimeStampEnd:withDiagnostics:;
- (id)cpuExceptionDiagnostics;
- (id)diskWriteExceptionDiagnostics;
- (id)hangDiagnostics;
- (id)appLaunchDiagnostics;
- (id)crashDiagnostics;
+ (BOOL)supportsSecureCoding;
@end
