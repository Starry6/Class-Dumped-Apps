@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject
@property (nonatomic) ^{__SecCertificate=} encryptionCertificate;
- (void)dealloc;
- (id)initWithEmailAddress:;
- (id)initWithIdentity:;
- (id)initWithCertificate:;
- (id)initWithAttribute:error:;
- (id)encodeAttributeWithError:;
- (id)encryptionCertificate;
@end
