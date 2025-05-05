@interface WFVoiceShortcutCache : NSObject
@property (nonatomic) NSArray voiceShortcuts;
@property (nonatomic) NSMutableArray waitingFetchRequests;
@property (nonatomic) Q state;
@property (nonatomic) BOOL enabled;
- (id)init;
- (void)registerForDatabaseNotifications;
- (void)dealloc;
- (id)voiceShortcuts;
- (void)unregisterFromDatabaseNotifications;
- (void)setCachedVoiceShortcuts:;
- (id)waitingFetchRequests;
- (void)setVoiceShortcuts:;
- (void)clear;
- (unsigned long long)state;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)getCachedVoiceShortcuts:;
- (void)databaseDidChange;
- (BOOL)isEnabled;
@end
