@interface APaySecurity : NSObject
- (id)decryptData:withInfo:;
- (id)encryptData:withInfo:;
- (void)savePublicKey:;
- (id)publicKey;
+ (id)sharedSecurity;
@end
