@interface CJPaySafeUtil : NSObject
@property (nonatomic) CJPaySafeManager safeManager;
- (void)setSafeManager:;
- (id)safeManager;
- (void).cxx_destruct;
+ (id)decryptContentFromH5:;
+ (id)encryptContentFromH5:;
+ (id)encryptContentFromH5:token:;
+ (id)encryptField:;
+ (id)encryptPWD:;
+ (id)encryptPWD:serialNumber:;
+ (id)objDecryptContentFromH5:engimaEngine:;
+ (id)objEncryptField:engimaEngine:;
+ (id)objEncryptPWD:engimaEngine:;
@end
