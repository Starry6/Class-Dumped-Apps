@interface CXCallDirectoryManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSXPCConnection defaultConnection;
@property (nonatomic) NSXPCConnection maintenanceConnection;
- (void)synchronizeExtensionsWithCompletionHandler:;
- (id)init;
- (void)dealloc;
- (void)openSettingsWithCompletionHandler:;
- (void)reloadExtensionWithIdentifier:completionHandler:;
- (void)setDefaultConnection:;
- (id)defaultConnection;
- (void)getEnabledStatusForExtensionWithIdentifier:completionHandler:;
- (void)setMaintenanceConnection:;
- (void)setEnabled:forExtensionWithIdentifier:completionHandler:;
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:completionHandler:;
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:;
- (void)getExtensionsWithCompletionHandler:;
- (void).cxx_destruct;
- (void)compactStoreWithCompletionHandler:;
- (void)setQueue:;
- (id)maintenanceConnection;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:;
- (id)queue;
- (void)setPrioritizedExtensionIdentifiers:completionHandler:;
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:completionHandler:;
+ (id)sharedInstance;
@end
