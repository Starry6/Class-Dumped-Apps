@interface STScreenTimeSettings : NSManagedObject
@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL cloudSyncEnabled;
+ (id)fetchScreenTimeSettingsInContext:error:;
@end
