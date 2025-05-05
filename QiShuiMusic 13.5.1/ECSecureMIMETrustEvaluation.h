@interface ECSecureMIMETrustEvaluation : NSObject
@property (nonatomic) ^{__SecTrust=} trust;
@property (nonatomic) NSString signerEmailAddress;
@property (nonatomic) Q options;
@property (nonatomic) NSError error;
@property (nonatomic) I trustResult;
@property (nonatomic) BOOL requiresReevaluationWithNetworkAccess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)error;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)description;
- (id)trust;
- (unsigned int)trustResult;
- (id)_initWithTrust:options:signerEmailAddress:;
- (void)_evaluate;
- (BOOL)requiresReevaluationWithNetworkAccess;
- (id)signerEmailAddress;
+ (id)log;
+ (id)evaluateTrust:withOptions:signerEmailAddress:;
+ (id)reevaluateWithNetworkAccessAllowed:;
+ (id)anchorCertificatesForTesting;
+ (void)setAnchorCertificatesForTesting:;
@end
