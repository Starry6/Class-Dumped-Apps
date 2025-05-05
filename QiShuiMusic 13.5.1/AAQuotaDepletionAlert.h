@interface AAQuotaDepletionAlert : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)_deviceSpecificLocalizedString:;
- (id)initForDataclass:;
- (id)_primaryAccount;
- (void)showWithHandler:;
- (BOOL)showIfNecessaryWithHandler:;
+ (BOOL)_isDisabledDataclass:;
@end
