@interface SBSLockScreenContentAction : BSAction
@property (nonatomic) Q type;
@property (nonatomic) NSString slot;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q secureAppType;
@property (nonatomic) @ configurationObject;
@property (nonatomic) BOOL automaticallyInvalidatesOnSecureAppUserDismissal;
- (id)slot;
- (id)identifier;
- (void)setType:;
- (void)setSlot:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)configurationObject;
- (void)setConfigurationObject:;
- (id)initWithType:slot:identifier:configurationObject:handler:;
- (unsigned long long)secureAppType;
- (BOOL)automaticallyInvalidatesOnSecureAppUserDismissal;
- (void)setSecureAppType:;
@end
