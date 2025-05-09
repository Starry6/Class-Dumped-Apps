@interface AWERecordResourcePreloadManager : NSObject
@property (nonatomic) NSMutableDictionary taskQueue;
@property (nonatomic) NSArray allEffect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskWithKey:;
- (void)removeTaskQueueWithKey:;
- (id)allEffect;
- (void)setAllEffect:;
- (id)recordNormalResourceAsyncHandler;
- (id)createDownloadTaskWithType:resourceModel:completion:;
- (void)removeAllTaskQueue;
- (void)saveTaskQueueWithKey:task:;
- (id)taskQueue;
- (void).cxx_destruct;
- (void)setTaskQueue:;
+ (void)clearAllResourceDownloadTask;
+ (void)effectResourcePreloadWithIds:effects:requestExtraParam:;
+ (void)musicResourcePreloadWithId:music:;
+ (id)resourceResultHandler;
+ (BOOL)checkHasEffectResourceTaskWithEffectId:;
+ (void)executeRecordEffectProcessTask;
+ (BOOL)checkHasMusicResourceTaskWithMusicId:;
+ (void)executeRecordMusicProcessTaskWithExtraParam:;
+ (BOOL)enableRecordBeautyOpt;
+ (void)executeRecordBeautyOptTask:;
+ (id)defaultManager;
@end
