@interface AWEGDLRUCacheShared : NSObject
@property (nonatomic) NSInteger maxCount;
@property (nonatomic) NSMutableArray keysArr;
@property (nonatomic) NSMutableDictionary dataDic;
@property (nonatomic) NSMutableArray queue;
@property (nonatomic) NSInteger doingTask;
- (id)dataDic;
- (void)setDataDic:;
- (id)getDataWithBizCode:keyMap:;
- (void)addWithBizCode:keyMap:ditoData:cacheFrom:;
- (void)removeWithKey:;
- (void)setDoingTask:;
- (void)initOrResetWithMaxCount:;
- (void)setKeysArr:;
- (id)filterWhiteListComponents:bizCode:;
- (id)getResultKeyWithBizCode:keyMap:;
- (id)keysArr;
- (void)moveToHeaderForKey:;
- (void)tryRunTask;
- (int)doingTask;
- (void)setMaxCount:;
- (int)maxCount;
- (void)setQueue:;
- (void).cxx_destruct;
- (id)queue;
+ (void)requestWithParams:bizCode:activityID:cacheFrom:completion:;
+ (void)stopAllPreRequestTask;
+ (id)shared;
@end
