@interface SFIconGenerator : NSObject
+ (void)getAppIconForBundleIdentifier:imageDescriptor:resultHandler:;
+ (id)appIconForBundleIdentifier:imageSize:;
@end
