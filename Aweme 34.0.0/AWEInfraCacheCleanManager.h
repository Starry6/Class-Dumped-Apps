@interface AWEInfraCacheCleanManager : NSObject
@property (nonatomic) BOOL shouldCleanLegacyFiles;
@property (nonatomic) Q backgroundTempTask;
@property (nonatomic) AWEStorage universalStorage;
@property (nonatomic) double appUsageSpaceInMB;
- (unsigned long long)backgroundTempTask;
- (void)setBackgroundTempTask:;
- (id)universalStorage;
- (BOOL)shouldCleanLegacyFiles;
- (void)setShouldCleanLegacyFiles:;
- (BOOL)shouldCleanForExtremeUser;
- (BOOL)oneDate:isEarlierNowByAddDays:;
- (double)appUsageSpaceInMB;
- (void)setAppUsageSpaceInMB:;
- (BOOL)inCleanScenes;
- (BOOL)moreThanThresholdValue;
- (BOOL)frequencyExecute;
- (void)setUniversalStorage:;
- (id)init;
- (void)applicationDidEnterBackground;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)endBackgroundTask;
- (BOOL)newUser;
+ (id)sharedManager;
@end
