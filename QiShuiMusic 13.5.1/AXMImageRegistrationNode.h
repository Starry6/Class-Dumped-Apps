@interface AXMImageRegistrationNode : AXMEvaluationNode
@property (nonatomic) q registrationState;
- (long long)registrationState;
- (void).cxx_destruct;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
- (BOOL)requiresVisionFramework;
- (id)_translationalImageRegistrationRequestForInput:;
- (void)_resetTranspositionHistory;
- (void)_resetImageRegistration;
- (void)_recordTransposition:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
