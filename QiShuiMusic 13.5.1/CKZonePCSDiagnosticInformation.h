@interface CKZonePCSDiagnosticInformation : NSObject
@property (nonatomic) BOOL wasRepaired;
@property (nonatomic) NSInteger pcsStatus;
@property (nonatomic) NSString pcsDiagnosticString;
@property (nonatomic) NSError pcsError;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)wasRepaired;
- (void)setWasRepaired:;
- (int)pcsStatus;
- (void)setPcsStatus:;
- (id)pcsDiagnosticString;
- (void)setPcsDiagnosticString:;
- (id)pcsError;
- (void)setPcsError:;
+ (BOOL)supportsSecureCoding;
@end
