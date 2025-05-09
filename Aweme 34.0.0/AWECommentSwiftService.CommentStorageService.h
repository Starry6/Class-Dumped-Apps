@interface AWECommentSwiftService.CommentStorageService : NSObject
- (void)setResourcePathInCache:forKey:;
- (id)resourcePathInCacheForKey:;
- (void)setDouble:forKey:;
- (id)init;
- (void)setInteger:forKey:;
- (float)floatForKey:;
- (id)arrayForKey:;
- (id)stringForKey:;
- (id)dataForKey:;
- (void)setData:forKey:;
- (BOOL)setBool:forKey:;
- (void)setArray:forKey:;
- (void)setDictionary:forKey:;
- (void)setString:forKey:;
- (id)dictionaryForKey:;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (double)doubleForKey:;
- (void)setFloat:forKey:;
- (BOOL)boolForKey:;
- (long long)integerForKey:;
- (id)URLForKey:;
- (void)setObject:forKey:;
- (void)setURL:forKey:;
@end
