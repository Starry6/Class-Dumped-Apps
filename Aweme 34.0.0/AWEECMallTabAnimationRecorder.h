@interface AWEECMallTabAnimationRecorder : NSObject
@property (nonatomic) AWEStorage storage;
@property (nonatomic) NSMutableDictionary tabAnimationRecords;
- (void)addNotification;
- (id)tabAnimationRecords;
- (void)setTabAnimationRecords:;
- (void)recordTabShowAnimation:;
- (id)getTabShowAnimationRecords;
- (void)setStorage:;
- (void)clearCache;
- (id)init;
- (id)storage;
- (void)dealloc;
- (void)saveCache;
- (void)readCache;
- (void).cxx_destruct;
- (void)appWillResignActive;
@end
