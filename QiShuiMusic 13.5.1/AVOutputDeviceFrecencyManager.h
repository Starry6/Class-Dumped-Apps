@interface AVOutputDeviceFrecencyManager : NSObject
+ (double)frecencyScoreForDeviceID:;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:;
+ (id)_applicationSupportPath;
+ (id)_frecentsWriter;
+ (id)_frecentsContainerPath;
+ (id)_frecentsFilePath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (void)updateFrecencyListForDeviceID:;
@end
