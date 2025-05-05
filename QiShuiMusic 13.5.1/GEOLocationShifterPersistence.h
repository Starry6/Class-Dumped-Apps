@interface GEOLocationShifterPersistence : NSObject
- (id)init;
- (void)removeAllEntries;
- (void)tearDown;
- (void).cxx_destruct;
- (BOOL)_setup:;
- (id)initWithDBFilePath:;
- (void)storeResponse:;
- (void)findResponseForCoordinate:reduceRadius:queue:completion:;
- (void)pruneEntriesOlderThan:maximumEntriesToKeep:;
- (void)removeAllEntriesSync;
- (void)getAllEntries:queue:handler:;
+ (id)sharedPersister;
@end
