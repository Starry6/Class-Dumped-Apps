@interface BDUGLocationDiscreteTask : NSObject
@property (nonatomic) double lastReqTime;
@property (nonatomic) NSString lastSource;
@property (nonatomic) NSMutableDictionary taskMap;
@property (nonatomic) NSMutableDictionary singleTaskMap;
- (void)setLastReqTime:;
- (id)addLocationWithDesiredAccuracy:cacheTime:isUseCacheTime:timeout:uploadSource:intelUploadInterval:option:cert:timeoutHandler:completionHandler:;
- (double)lastReqTime;
- (void)removeAllLocations;
- (void)removeLocationWithID:;
- (void)setSingleTaskMap:;
- (id)singleTaskMap;
- (BOOL)tryBindTask:completion:timeoutCompletion:;
- (void)useLastLocationWithToken:;
- (id)init;
- (void)dealloc;
- (id)taskMap;
- (void).cxx_destruct;
- (void)setTaskMap:;
- (id)lastSource;
- (void)setLastSource:;
@end
