@interface VCPClientDatabaseManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)sharedDatabaseForPhotoLibrary:;
+ (id)sharedDatabaseManager;
+ (id)sharedDatabaseForPhotoLibrary:;
@end
