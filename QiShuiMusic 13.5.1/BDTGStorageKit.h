@interface BDTGStorageKit : BDTGDanceKit
+ (id)getStringForKey:enableKeyChain:;
+ (void)syncToUserDefaultsIfNeeded:key:;
+ (BOOL)getBoolForKey:enableKeyChain:;
+ (id)getDataForKey:enableKeyChain:;
+ (void)initializeStorage;
+ (void)setData:forKey:enableKeyChain:;
+ (void)setString:forKey:enableKeyChain:;
+ (void)setYESForKey:;
+ (void)setYESForKey:enableKeyChain:;
+ (void)syncToKeychainIfNeeded:key:;
+ (void)setString:forKey:;
+ (void)setData:forKey:;
+ (id)getDataForKey:;
+ (id)getStringForKey:;
+ (BOOL)getBoolForKey:;
@end
