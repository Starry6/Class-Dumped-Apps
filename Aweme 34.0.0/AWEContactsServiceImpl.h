@interface AWEContactsServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)deviceContactsAccessStatus;
- (unsigned long long)userContactsAccessStatusWithUserID:;
- (void)requestAccessWithUserID:BDCertName:completion:;
- (void)updateContactsAccessGranted:userID:;
- (void)loadAndUploadWithWithBDCert:uploadScene:enterFrom:completion:;
- (BOOL)isUserContactsAccessAuthorizedWithUserID:;
- (void)checkUserContactsAccessStatusWithUserID:;
- (id)validateContactsWithBDCert:method:;
- (id)localNameForKey:;
- (long long)localContactsPermitCount;
- (id)localContactsInfoForKeysList:;
- (id)p_validateWithBDCert:method:;
- (void)monitorAwemeUploadSwordContacts:;
- (id)init;
+ (id)sharedInstance;
@end
