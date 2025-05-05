@interface EFLazyCache : NSObject
@property (nonatomic) <EFLazyCacheDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cachedObjectForKey:;
- (id)init;
- (void)dealloc;
- (long long)waiterCountForKey:;
- (void)setDelegate:;
- (void)removeAllObjects;
- (id)objectForKey:generator:;
- (void)_exchangeOriginalObject:forKey:withObject:;
- (id)delegate;
- (id)storedObjectForKey:;
- (void).cxx_destruct;
- (void)cache:willEvictObject:;
- (void)removeObjectForKey:;
- (id)initWithCountLimit:;
@end
