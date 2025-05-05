@interface NRRegistryHistoryStore : NRRegistry
@property (nonatomic) NRDeviceCollectionHistory history;
- (id)collection;
- (void)setCollection:;
- (void)dealloc;
- (id)initWithParameters:;
- (void)grabHistoryWithWriteBlock:;
- (id)history;
- (void).cxx_destruct;
- (void)grabHistoryWithReadBlock:;
- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:secureProperties:;
- (void)syncGrabHistoryWithReadBlock:;
- (id)addDiffIndexObserverWithWriteBlock:;
- (void)invalidate;
- (void)_notifyDiffIndexObserversWithHistoryEntry:deviceCollection:secureProperties:;
- (void)removeDiffIndexObserver:;
- (void)syncGrabHistoryWithWriteBlock:;
+ (id)sharedInstance;
@end
