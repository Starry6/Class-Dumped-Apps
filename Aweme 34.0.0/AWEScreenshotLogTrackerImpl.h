@interface AWEScreenshotLogTrackerImpl : NSObject
@property (nonatomic) NSHashTable providers;
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) NSArray blackList;
@property (nonatomic) BOOL enable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)blackList;
- (void)setBlackList:;
- (void)_reigsterScreenshotObserver;
- (void)_writeAppInfo;
- (void)_writeProvidersInfo;
- (void)_userTakeScreenshotForFeedback;
- (void)addTrackerProvider:;
- (void)removeTrackerProvider:;
- (BOOL)enable;
- (id)providers;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void)setProviders:;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)screenshotTracker;
@end
