@interface LAPublicKey : NSObject
- (void)dealloc;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)right;
- (id)description;
- (void)setRight:;
- (void)exportBytesWithCompletion:;
- (void)encryptData:secKeyAlgorithm:completion:;
- (BOOL)canEncryptUsingSecKeyAlgorithm:;
- (void)verifyData:signature:secKeyAlgorithm:completion:;
- (BOOL)canVerifyUsingSecKeyAlgorithm:;
@end
