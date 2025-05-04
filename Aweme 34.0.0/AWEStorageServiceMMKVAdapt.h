@interface AWEStorageServiceMMKVAdapt : AWEStorageServiceAdapt
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)objectForKey:configuration:;
- (void)setObject:forKey:configuration:;
- (void)removeObjectForKey:configuration:;
- (id)stringForKey:configuration:;
- (id)arrayForKey:configuration:;
- (id)dictionaryForKey:configuration:;
- (id)dataForKey:configuration:;
- (long long)integerForKey:configuration:;
- (void)setInteger:forKey:configuration:;
- (float)floatForKey:configuration:;
- (void)setFloat:forKey:configuration:;
- (double)doubleForKey:configuration:;
- (void)setDouble:forKey:configuration:;
- (BOOL)boolForKey:configuration:;
- (void)setBool:forKey:configuration:;
- (id)URLForKey:configuration:;
- (void)setURL:forKey:configuration:;
- (void).cxx_destruct;
- (id)initWithDomain:;
@end
