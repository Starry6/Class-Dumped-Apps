@interface HeimdallrUtilities : NSObject
+ (BOOL)isClassFromApp:;
+ (BOOL)canFindDebuggerAttached;
+ (id)dateStringFromDate:isUTC:isMilloFormat:;
+ (id)heimdallrRootPath;
+ (void)initPath;
+ (id)payloadWithDecryptData:withKey:iv:;
+ (id)libraryPath;
+ (id)modelIdentifier;
+ (id)systemName;
+ (id)systemVersion;
+ (BOOL)isiOSAppOnMac;
@end
