@interface CJPayTracker : NSObject
@property (nonatomic) NSHashTable trackerDels;
@property (nonatomic) NSMutableDictionary mutableCommonDic;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} mutexLock;
@property (nonatomic) <CJPayManagerBizDelegate> trackerDelegate;
- (void)setTrackerDels:;
- (id)trackerDelegate;
- (void)addTrackerDelegate:;
- (BOOL)hasValidTrackerDelegate;
- (id)mutableCommonDic;
- (id)mutexLock;
- (void)removeTrackerDelegate:;
- (void)setMutableCommonDic:;
- (void)setMutexLock:;
- (void)setTrackerDelegate:;
- (id)trackerDels;
- (id)init;
- (void).cxx_destruct;
+ (void)addCommonTrackDic:;
+ (void)event:params:;
+ (id)p_commonTrackDic;
+ (Class)trackerCls;
+ (id)shared;
@end
