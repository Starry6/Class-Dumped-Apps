@interface AWEFeedCacheDisasterFactoryCreator : NSObject
@property (nonatomic) NSSet keepSet;
@property (nonatomic) AWEFeedCacheDataDepository dataDepository;
@property (nonatomic) OnceLock process_lock;
@property (nonatomic) NSDictionary sceneConfig;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sceneConfig;
- (double)lastRequestTime;
- (void)setLastRequestTime:;
- (void)setSceneConfig:;
- (id)dataDepository;
- (id)createUpdateProcessorsWithDataDepository:;
- (id)process_lock;
- (id)keepSet;
- (void)setProcess_lock:;
- (id)init;
- (void)restoreInfo;
- (id)create;
- (void).cxx_destruct;
@end
