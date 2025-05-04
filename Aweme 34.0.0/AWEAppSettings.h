@interface AWEAppSettings : NSObject
+ (void)fetchSettings;
+ (id)bytedSettings;
+ (id)awemeSettings;
+ (void)fetchSettingsWithHeaders:;
+ (void)fetchBytedSettingsWithHeaders:;
+ (id)platformSettings;
+ (void)fetchShareSettings;
+ (void)fetchBytedSettings;
+ (id)localSettings;
@end
