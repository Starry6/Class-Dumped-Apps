@interface APScpFrameworkManager : NSObject
+ (id)getNativeConfig;
+ (int)executeSyncEvent:properties:external:length:timeout:callback:;
+ (id)getStorageFilePath;
+ (void)initFramework;
+ (void)initScpFramework:;
@end
