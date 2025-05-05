@interface CATArbitrator : NSObject
- (id)init;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)resourceForKey:exclusive:;
- (id)resourcesForKeys:exclusive:;
- (id)waitForResourcesForKeys:exclusive:delegateQueue:completionBlock:;
- (void)stopWaiting:;
- (void)registerResource:forKey:;
- (void)registerResource:forKey:maxConcurrentCount:;
- (unsigned long long)unregisterResourceForKey:;
@end
