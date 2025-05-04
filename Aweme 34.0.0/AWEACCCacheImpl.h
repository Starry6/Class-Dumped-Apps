@interface AWEACCCacheImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDouble:forKey:;
- (void)setInteger:forKey:;
- (float)floatForKey:;
- (id)arrayForKey:;
- (void)removeAllObjects;
- (id)stringForKey:;
- (id)dataForKey:;
- (void)setBool:forKey:;
- (void)setArray:forKey:;
- (void)setDictionary:forKey:;
- (void)setString:forKey:;
- (id)dictionaryForKey:;
- (void)removeObjectForKey:;
- (id)objectForKey:;
- (double)doubleForKey:;
- (void)setFloat:forKey:;
- (BOOL)boolForKey:;
- (long long)integerForKey:;
- (void)setObject:forKey:;
@end
