@interface BDDyldNotification : NSObject
+ (void)addAppMachoImageLoadedListener:;
+ (void)addSystemMachoImageLoadedListener:;
+ (void)markAppMachoImageDidLoadedFromCustom:bundleName:;
+ (void)markAppMachoImageWillLoad:;
+ (void)setup;
@end
