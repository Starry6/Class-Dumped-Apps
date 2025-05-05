@interface WBSAllowedLegacyTLSHostManager : NSObject
- (void).cxx_destruct;
- (void)allowLegacyTLSForHost:;
- (BOOL)isLegacyTLSAllowedForHost:;
- (id)initWithBrowserDefaults:;
- (void)clearLegacyTLSForHostIfPresent:;
- (void)clearAllLegacyTLSHosts;
- (void)clearLegacyTLSForHosts:;
@end
