@interface AWEContextStore : NSObject
@property (nonatomic) AWEThreadSafeMutableDictionary dictionary;
- (id)contextItemForKey:;
- (void)notifyChanged:object:;
- (void)setDouble:forKey:;
- (id)init;
- (void)setInteger:forKey:;
- (float)floatForKey:;
- (id)arrayForKey:;
- (id)dictionary;
- (void)removeAllObjects;
- (void)setDictionary:;
- (id)stringForKey:;
- (void)setBool:forKey:;
- (void)setArray:forKey:;
- (void)setDictionary:forKey:;
- (void)setString:forKey:;
- (id)dictionaryForKey:;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (double)doubleForKey:;
- (id)allKeys;
- (void)setFloat:forKey:;
- (BOOL)boolForKey:;
- (long long)integerForKey:;
- (void)setObject:forKey:;
@end
