@interface BKSLockdownDefaults : BSAbstractDefaultDomain
@property (nonatomic) BOOL tetheredDisplayPortMode;
- (id)init;
- (void)_bindAndRegisterDefaults;
@end
