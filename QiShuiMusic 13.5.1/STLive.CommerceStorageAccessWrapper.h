@interface STLive.CommerceStorageAccessWrapper : NSObject
- (void)setString:forKey:;
- (id)init;
- (void)setArray:forKey:;
- (void)setDictionary:forKey:;
- (void)setBool:forKey:;
- (BOOL)boolForKey:;
- (id)stringForKey:;
- (void)setInteger:forKey:;
- (id)arrayForKey:;
- (long long)integerForKey:;
- (id)dictionaryForKey:;
@end
