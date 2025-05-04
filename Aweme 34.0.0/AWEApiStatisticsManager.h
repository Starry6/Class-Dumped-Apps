@interface AWEApiStatisticsManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)hanleEvent:;
- (void)__storageRecordForFetchingIDFA;
- (void)__storageRecordFetchingApiWithKey:;
- (void)__createRecordListStorageWithKey:;
- (void)__updateRecordListStorageWithKey:;
- (void)__createRecordListStorageWithKey:date:times:;
- (id)init;
- (id)uniqueId;
- (void).cxx_destruct;
+ (id)mainStorage;
@end
