@interface AWEStorageServiceBackup : NSObject
- (id)syncReadObjectForKeyFromStorageFile:;
- (id)objectForKey:withMetaData:;
- (void)setDouble:forKey:;
- (id)init;
- (void)setInteger:forKey:;
- (float)floatForKey:;
- (void)removeValueForKey:;
- (void)setBool:forKey:;
- (void).cxx_destruct;
- (double)doubleForKey:;
- (void)setFloat:forKey:;
- (BOOL)boolForKey:;
- (long long)integerForKey:;
- (void)setObject:forKey:;
+ (id)sharedInstance;
@end
