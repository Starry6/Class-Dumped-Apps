@interface STSecurity.TimonService : NSObject
- (BOOL)enableAutoReadPasteboard;
- (BOOL)enableAutoSyncConfig;
- (BOOL)hasAgreedPrivacy;
- (BOOL)isBasicMode;
- (BOOL)isTeenMode;
- (BOOL)usePasteboardDevSuiteForRead;
- (BOOL)usePasteboardDevSuiteForWrite;
- (id)defaultRules;
- (id)init;
- (void).cxx_destruct;
@end
