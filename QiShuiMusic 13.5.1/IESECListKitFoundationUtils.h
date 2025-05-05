@interface IESECListKitFoundationUtils : NSObject
+ (int)appVersionNumber;
+ (double)ieseclistkit_colorComponentFrom:start:length:;
+ (id)ieseclistkit_colorWithHexString:defaultColor:;
+ (id)ieseclistkit_colorWithString:defaultColor:;
+ (id)ieseclistkit_stringByReplacingControllerString:withViewModelString:forString:;
+ (int)versionNumderFromString:;
@end
