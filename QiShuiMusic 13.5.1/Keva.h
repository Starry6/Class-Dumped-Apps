@interface Keva : NSObject
- (int)int32ForKey:defaultValue:;
- (long long)int64ForKey:defaultValue:;
- (void)storeBool:forKey:;
- (void)storeDouble:forKey:;
- (void)storeFloat:forKey:;
- (void)storeInt32:forKey:;
- (void)storeInt64:forKey:;
- (void)storeInteger:forKey:;
- (void)storeObject:forKey:;
- (void)storeString:forKey:;
- (id)stringForKey:;
- (id)all;
- (BOOL)boolForKey:defaultValue:;
- (void)clear;
- (float)floatForKey:defaultValue:;
- (id)objectForKey:;
- (id)name;
- (long long)count;
- (long long)integerForKey:defaultValue:;
- (double)doubleForKey:defaultValue:;
- (BOOL)contains:;
- (void)removeForKey:;
+ (id)repoWithName:;
+ (id)repoWithNameSync:;
+ (id)repoWithSyncImporter:;
@end
