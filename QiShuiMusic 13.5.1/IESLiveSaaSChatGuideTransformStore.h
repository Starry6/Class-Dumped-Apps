@interface IESLiveSaaSChatGuideTransformStore : NSObject
@property (nonatomic) NSMutableDictionary launchShowRecord;
- (long long)clickTimesCurLaunchForPosition:;
- (id)todayShowRecord;
- (id)currentOpenID;
- (id)launchClickRecord;
- (id)launchShowRecord;
- (void)recordClickForPosition:;
- (void)recordShowForPosition:;
- (void)setLaunchShowRecord:;
- (long long)showTimesAtTodayForPosition:;
- (long long)showTimesCurLaunchForPosition:;
- (id)storeKeyForPosition:;
- (void).cxx_destruct;
+ (id)sharedStore;
@end
