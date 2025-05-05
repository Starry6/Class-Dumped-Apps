@interface MSAutosave : MSXPCService
@property (nonatomic) NSHashTable activeAutosaveSessions;
- (id)init;
- (BOOL)hasAutosavedMessageWithIdentifier:;
- (void)_handleInterruptedConnection;
- (id)newConnectionForInterface:;
- (id)autosavedMessageDataWithIdentifier:;
- (void)_getRemoteAutosaveSessionForIdentifier:completion:;
- (id)initWithRemoteObjectInterface:;
- (void).cxx_destruct;
- (void)setActiveAutosaveSessions:;
- (void)getIdleAutosaves:;
- (void)autosaveMessageData:replacingIdentifier:completion:;
- (void)autosaveSessionForIdentifier:completion:;
- (id)activeAutosaveSessions;
- (void)removeAutosavedMessageWithIdentifier:;
+ (id)log;
+ (id)autosave;
@end
