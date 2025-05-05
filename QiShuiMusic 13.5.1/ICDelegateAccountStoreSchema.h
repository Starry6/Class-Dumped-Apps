@interface ICDelegateAccountStoreSchema : NSObject
+ (id)dateForValue:;
+ (long long)currentVersion;
+ (id)defaultDatabasePath;
+ (double)valueForDate:;
+ (BOOL)setupWithConnection:error:;
+ (BOOL)_createDefaultSchemaWithConnection:error:;
@end
