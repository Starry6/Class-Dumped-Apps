@interface MFCertificateTrustInformationKeychainManager : NSObject
@property (nonatomic) NSInteger action;
@property (nonatomic) BOOL hasTrustException;
@property (nonatomic) Q keychainStatus;
@property (nonatomic) BOOL canSaveCertificateToKeychain;
@property (nonatomic) NSString addressForSaving;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)action;
- (void).cxx_destruct;
- (id)initWithTrustInformation:;
- (BOOL)canSaveCertificateToKeychain;
- (BOOL)hasTrustException;
- (void)addTrustException;
- (void)removeTrustException;
- (void)saveCertificateToKeychain;
- (void)removeCertificateFromKeychain;
- (unsigned long long)keychainStatus;
- (id)addressForSaving;
+ (id)log;
@end
