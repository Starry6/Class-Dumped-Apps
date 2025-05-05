@interface PTYMemoryCache : NSObject
@property (nonatomic) NSString business;
@property (nonatomic) NSString aid;
- (id)getCache;
- (id)getCacheWithTryLock:;
- (id)getValuesForKeys:;
- (id)getValuesForKeys:withTryLock:;
- (id)initWithBusiness:aid:;
- (BOOL)containsKey:;
- (BOOL)setValue:forKey:;
- (BOOL)setCache:;
- (id)getValueForKey:;
- (void).cxx_destruct;
- (id)business;
- (BOOL)removeKeys:;
- (BOOL)append:;
- (id)aid;
@end
