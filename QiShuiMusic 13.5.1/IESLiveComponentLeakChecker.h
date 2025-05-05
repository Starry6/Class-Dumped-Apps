@interface IESLiveComponentLeakChecker : NSObject
@property (nonatomic) NSMutableDictionary checkItemPool;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSMutableDictionary commonDictionaryInfo;
- (void)checkDeallocAll;
- (id)checkItemPool;
- (id)commonDictionaryInfo;
- (void)deallocRoomWithIndex:;
- (id)itemWithIndex:create:;
- (void)recordIndex:components:extra:;
- (void)recordIndex:liveObject:;
- (void)reportIndex:leaks:extra:;
- (void)reportLeakWithParams:;
- (void)setCheckItemPool:;
- (void)setCommonDictionaryInfo:;
- (id)variableInfo;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setEnable:;
- (id)branchName;
+ (id)buildInfoDic;
+ (id)leakChecker;
@end
