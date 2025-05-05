@interface IESECTabKitKVStoreManager : NSObject
- (id)init;
- (void)setBool:forKey:;
- (BOOL)boolForKey:;
- (void).cxx_destruct;
- (void)clearStore;
+ (id)sharedInstance;
@end
