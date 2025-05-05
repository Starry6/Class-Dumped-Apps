@interface FPExtensionCollection : FPItemCollection
@property (nonatomic) FPExtensionEnumerationSettings settings;
- (id)settings;
- (void)setSettings:;
- (id)enumeratedItemID;
- (void)startObserving;
- (void)stopObserving;
- (id)initWithSettings:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)recoverFromError:;
- (BOOL)shouldRetryError:;
- (BOOL)isRootItem:;
- (void)updateRootItem:;
- (BOOL)isCollectionValidForItem:;
- (id)createDataSourceWithSortDescriptors:;
- (id)scopedSearchQuery;
- (void)_failMonitoringWithError:;
- (void)_startMonitoringDomains;
- (void)_stopMonitoringDomains;
- (void)_startMonitoringDSCopyProgress;
- (void)_stopMonitoringDSCopyProgress;
+ (BOOL)item:isValidForObservedItemID:;
+ (BOOL)_item:isCollectionRootForObservedItemID:;
@end
