@interface VEMediaEffectTracker : IESMMObject
@property (nonatomic) NSMutableDictionary trackDic;
- (id)getMediaEffectDic;
- (void)p_setVEEffectVersion;
- (void)printMediaEffectDic;
- (void)setTrackDic:;
- (void)setValue:withKey:;
- (id)trackDic;
- (id)init;
- (void)dealloc;
- (void)removeKey:;
- (void)clear;
- (void).cxx_destruct;
+ (void)removeTracker;
+ (void)setTrackerInstance:;
+ (id)trackerLock;
+ (id)sharedInstance;
@end
