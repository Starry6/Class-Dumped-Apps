@interface CXCallDirectoryExtensionManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <CXCallDirectoryExtensionManagerDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) CXCallDirectoryManager manager;
@property (nonatomic) NSInteger storeExtensionsChangedNotifyToken;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegateQueue;
- (id)manager;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (void)setDelegateQueue:;
- (id)queue;
- (void)setDelegate:queue:;
- (void)setPrioritizedExtensionIdentifiers:completionHandler:;
- (void)extensionsWithCompletionHandler:;
- (void)beginObservingExtensions;
- (void)_extensionsChanged;
- (void)setEnabled:forExtension:completion:;
- (int)storeExtensionsChangedNotifyToken;
- (void)setStoreExtensionsChangedNotifyToken:;
@end
