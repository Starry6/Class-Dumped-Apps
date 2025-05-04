@interface AWEIMPopupViewStorageManager : NSObject
+ (BOOL)enableLocalStorageFeature;
+ (BOOL)getLocalStorageEnableForKey:;
+ (void)setLocalStorageEnable:forKey:;
@end
