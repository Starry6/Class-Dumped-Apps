@interface NPDiagnosticReport : NSObject
+ (void)logInternalError:context:;
+ (BOOL)logNSPDiagnosticReport:event:context:;
@end
