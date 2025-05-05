@interface AMSBAAKeychainItems : NSObject
@property (nonatomic) NSData BAACert;
@property (nonatomic) ^{__SecKey=} BIKKeyRef;
@property (nonatomic) NSData IntermediateRootCert;
- (void).cxx_destruct;
- (id)BAACert;
- (void)setBAACert:;
- (id)BIKKeyRef;
- (void)setBIKKeyRef:;
- (id)IntermediateRootCert;
- (void)setIntermediateRootCert:;
@end
