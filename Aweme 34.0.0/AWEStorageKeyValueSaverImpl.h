@interface AWEStorageKeyValueSaverImpl : NSObject
- (id)obtainKey:;
- (void)saveKey:value:;
+ (id)sharedInstance;
@end
