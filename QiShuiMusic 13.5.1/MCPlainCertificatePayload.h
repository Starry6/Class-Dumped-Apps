@interface MCPlainCertificatePayload : MCCertificatePayload
@property (nonatomic) NSString certificateFileName;
@property (nonatomic) NSData certificateData;
@property (nonatomic) NSInteger dataEncoding;
@property (nonatomic) NSString password;
- (id)password;
- (id)certificateData;
- (int)dataEncoding;
- (BOOL)isSigned;
- (void).cxx_destruct;
- (id)copyCertificate;
- (id)verboseDescription;
- (BOOL)isIdentity;
- (id)initWithDictionary:profile:outError:;
- (id)installationWarnings;
- (id)persistentResourceID;
- (id)certificateFileName;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
