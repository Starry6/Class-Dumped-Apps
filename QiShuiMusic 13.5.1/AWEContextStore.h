@interface AWEContextStore : NSObject
@property (nonatomic) AWEThreadSafeMutableDictionary dictionary;
- (id)contextItemForKey:;
- (void)notifyChanged:object:;
- (float)floatForKey:;
- (id)dictionary;
- (void)setString:forKey:;
- (id)init;
- (void)setObject:forKey:;
- (void)setDouble:forKey:;
- (void)setArray:forKey:;
- (void)setDictionary:;
- (void)setDictionary:forKey:;
- (void)setBool:forKey:;
- (id)allKeys;
- (BOOL)boolForKey:;
- (id)stringForKey:;
- (void)removeAllObjects;
- (void)setInteger:forKey:;
- (id)arrayForKey:;
- (void)setFloat:forKey:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (double)doubleForKey:;
- (void)removeObjectForKey:;
- (long long)integerForKey:;
- (id)dictionaryForKey:;
@end
