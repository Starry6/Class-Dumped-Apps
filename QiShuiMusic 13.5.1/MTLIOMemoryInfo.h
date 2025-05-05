@interface MTLIOMemoryInfo : NSObject
- (id)init;
- (void)shutdown;
- (void)dealloc;
- (id)addDataSource:;
- (void)unlock;
- (void)lock;
- (void)addResourceToList:;
- (void)removeDataSource:;
- (void)removeResourceFromList:;
- (id)annotationList;
@end
