@interface AWEEcomSearchTabGuideStorageManager : NSObject
@property (nonatomic) NSMutableDictionary storageData;
@property (nonatomic) AWESearchTabGuideStorageDailyModel dailyModel;
@property (nonatomic) NSString userID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storageData;
- (id)currentUserStorageData;
- (id)dailyModel;
- (BOOL)p_checkExitWithAction:exitRule:isGlobal:;
- (id)storageDataWithGuideID:;
- (id)getBanedGuidIDList;
- (void)setStorageData:;
- (void)setDailyModel:;
- (id)userID;
- (void).cxx_destruct;
- (void)save;
- (void)setUserID:;
+ (id)shareManager;
@end
