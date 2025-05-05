@interface SFProcessDictionary : NSObject
@property (nonatomic) Q cacheCapacity;
- (id)init;
- (void)dealloc;
- (void)_handleApplicationStateUpdate:;
- (void).cxx_destruct;
- (id)initWithCacheCapacity:;
- (void)_updateInterestedApplications;
- (void)_handleProcessTermination:;
- (void)_removeValueForPID:;
- (void)decrementReferenceForPID:;
- (void)_removeUnreferencedObjectsIfNeeded;
- (id)incrementReferenceForPID:bundleIdentifier:valueCreationBlock:;
- (unsigned long long)cacheCapacity;
@end
