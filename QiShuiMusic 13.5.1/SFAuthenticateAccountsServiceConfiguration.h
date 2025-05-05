@interface SFAuthenticateAccountsServiceConfiguration : NSObject
@property (nonatomic) I serviceType;
@property (nonatomic) I targetedAccountTypes;
@property (nonatomic) NSSet existingAccountsIdentifiers;
@property (nonatomic) BOOL isHomeSharingSetupNeeded;
@property (nonatomic) BOOL isHomeKitSetupNeeded;
- (id)init;
- (unsigned int)serviceType;
- (void)setServiceType:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned int)targetedAccountTypes;
- (void)setTargetedAccountTypes:;
- (BOOL)isHomeSharingSetupNeeded;
- (void)setIsHomeSharingSetupNeeded:;
- (BOOL)isHomeKitSetupNeeded;
- (void)setIsHomeKitSetupNeeded:;
- (id)existingAccountsIdentifiers;
- (void)setExistingAccountsIdentifiers:;
@end
