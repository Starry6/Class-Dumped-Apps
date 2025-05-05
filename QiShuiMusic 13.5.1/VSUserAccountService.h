@interface VSUserAccountService : VSServiceListener
@property (nonatomic) VSPreferences preferences;
@property (nonatomic) VSUserAccountRegistry registry;
- (void)setPreferences:;
- (id)init;
- (id)preferences;
- (id)_securityTaskForCurrentConnection;
- (id)registry;
- (void)performMigrationWithCompletion:;
- (void).cxx_destruct;
- (void)setRegistry:;
@end
