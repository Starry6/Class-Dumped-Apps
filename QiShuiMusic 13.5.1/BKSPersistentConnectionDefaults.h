@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain
@property (nonatomic) NSInteger forceDemoMaxHBI;
@property (nonatomic) NSString wifiInterfaceName;
- (id)init;
- (void)_bindAndRegisterDefaults;
@end
