@interface PTRestoreDefaultSettingsRowAction : PTRowAction
@property (nonatomic) NSString settingsKeyPath;
- (id)defaultHandler;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)settingsKeyPath;
+ (BOOL)supportsSecureCoding;
+ (id)action;
+ (id)actionWithSettingsKeyPath:;
@end
