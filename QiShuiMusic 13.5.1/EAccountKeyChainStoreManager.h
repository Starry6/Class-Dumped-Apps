@interface EAccountKeyChainStoreManager : NSObject
+ (void)deleteFakeUUID;
+ (void)deleteUUID;
+ (id)getFakeUUID;
+ (id)loadFakeUUID;
+ (id)loadUUID;
+ (id)randomUUIDString;
+ (void)saveFakeUUID:;
+ (void)saveUUID:;
+ (id)uuidFormater:;
+ (id)getUniqueCode;
@end
