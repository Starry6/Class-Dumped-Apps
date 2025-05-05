@interface MFDiagnostics : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)addDiagnosticsGenerator:;
- (void)removeDiagnosticsGenerator:;
- (void).cxx_destruct;
- (id)copyDiagnosticInformation;
+ (id)sharedController;
@end
