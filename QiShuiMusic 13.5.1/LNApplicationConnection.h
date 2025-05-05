@interface LNApplicationConnection : LNConnection
- (id)initWithBundleIdentifier:;
- (id)appBundleIdentifier;
- (id)initWithBundleIdentifier:appBundleIdentifier:error:;
- (void)handleConnectionActionResponse:;
@end
