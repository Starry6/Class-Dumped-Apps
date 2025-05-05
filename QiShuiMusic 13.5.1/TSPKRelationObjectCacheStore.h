@interface TSPKRelationObjectCacheStore : NSObject
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) NSMutableDictionary objects;
@property (nonatomic) double lastCleanTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanRecords;
- (void)cleanRecordsInArray:;
- (double)getCleanTime;
- (void)getStoreDataWithCompletion:;
- (void)getStoreDataWithInstanceAddress:completion:;
- (double)lastCleanTime;
- (id)objectOfUid:;
- (void)saveEventData:completion:;
- (void)scheduleACleanPlan;
- (void)setLastCleanTime:;
- (void)updateReportTime:;
- (id)init;
- (void)setObjects:;
- (id)lock;
- (id)objects;
- (void).cxx_destruct;
- (void)setLock:;
@end
