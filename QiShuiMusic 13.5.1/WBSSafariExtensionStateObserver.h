@interface WBSSafariExtensionStateObserver : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleExtensionWasAdded:;
- (void)_handleExtensionWasRemoved:;
- (void)_handleExtensionEnabledStateDidChange:;
- (id)initWithWebView:extensionsController:;
- (void)startObservingExtensionStateChanges;
- (void)stopObservingExtensionStateChanges;
- (void)_startObservingExtensionNotifications;
- (void)_stopObservingExtensionNotifications;
- (BOOL)_shouldObserveExtension:;
- (BOOL)_teardownObserverIfNecessary;
- (void)_addNamesForExtension:toMap:;
- (void)_addIDsForExtension:toSet:;
@end
