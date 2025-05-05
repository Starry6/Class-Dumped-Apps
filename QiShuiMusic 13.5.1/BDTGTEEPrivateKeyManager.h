@interface BDTGTEEPrivateKeyManager : BDTGPrivateKeyManager
- (void)getPrivateKeyDidFail;
- (void)getPrivateKeyDidSuccess:;
- (id)keyType;
+ (long long)checkLocalCertWithPrivateKey:;
+ (id)sharedInstance;
@end
