@interface BDUGLuckyPrefetchCache : NSObject
@property (nonatomic) IESPrefetchThreadSafeDictionary dic;
@property (nonatomic) <BDUGLuckyPrefetchCacheDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dic;
- (void)setDic:;
- (id)fetchAllKeys;
- (id)fetchObjectForKey:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (void)saveObject:forKey:;
@end
