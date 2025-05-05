@interface NLXPCSpellServerClient : NSObject
- (void)dealloc;
- (BOOL)isValid;
- (id)connection;
- (void).cxx_destruct;
- (id)serverName;
- (void)sendCommand:;
- (id)initWithServerName:;
+ (id)spellServerClient;
+ (void)requestAssetsForLanguage:;
@end
