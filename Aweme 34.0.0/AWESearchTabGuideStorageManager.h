@interface AWESearchTabGuideStorageManager : NSObject
@property (nonatomic) NSMutableDictionary storageData;
@property (nonatomic) AWESearchTabGuideStorageDailyModel dailyModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storageData;
- (id)currentUserStorageData;
- (id)dailyModel;
- (id)storageDataWithGuideID:;
- (void)setStorageData:;
- (void)setDailyModel:;
- (void).cxx_destruct;
- (void)save;
+ (id)shareManager;
@end
