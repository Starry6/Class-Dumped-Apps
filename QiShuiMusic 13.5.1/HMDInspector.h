@interface HMDInspector : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isDBHandling;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cleanupWeightWithTableNameAndClassPairs:additionalTableNames:;
- (BOOL)currentDatabaseTable:count:cleanupWeight:;
- (void)databaseCleanupByDevastation;
- (void)databaseCleanupByGranularity:;
- (BOOL)dbVaccumIfEnvironmentAvailable;
- (void)enterBackgroundForTask:;
- (void)handleCleanUploadRecordWithDBSize:;
- (void)handleDatabaseInspectation;
- (id)initSharedInspector;
- (BOOL)isDBHandling;
- (long long)recordCountForTableName:;
- (id)recordCountsWithTableNames:;
- (void)setIsDBHandling:;
- (BOOL)shouldPerformDevastedCleanup;
- (void)startDatabaseInspectation;
- (void)stopDatabaseInspectation;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)moduleName;
- (unsigned long long)databaseSize;
+ (id)allPossibleTableAndModulePairs;
+ (double)cleanupPercentageWithDatabaseSize:expectedSize:devastedSize:;
+ (id)combineTables:withTable:;
+ (id)defaultAdditonalTableName;
+ (id)defaultCleanupWeightForTableName:;
+ (id)defaultTableCleanupWeightOverride;
+ (unsigned long long)expectedDatabaseSize;
+ (unsigned long long)resolveDevastedSizeByExpectedSize:;
+ (id)sharedInstance;
+ (id)getInstance;
@end
