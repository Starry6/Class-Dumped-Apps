@interface BKSKeyboardDefaults : BSAbstractDefaultDomain
@property (nonatomic) NSDictionary modifierKeyRemapping;
@property (nonatomic) NSDictionary oldModifierKeyRemapping;
- (id)init;
- (void)migrateIfNeeded;
- (void)_bindAndRegisterDefaults;
@end
