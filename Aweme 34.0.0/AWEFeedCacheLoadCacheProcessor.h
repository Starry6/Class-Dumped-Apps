@interface AWEFeedCacheLoadCacheProcessor : NSObject
@property (nonatomic) AWEFeedCacheDataProvider cacheProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)onProcess:context:;
- (id)initWithCacheProvider:;
- (void).cxx_destruct;
- (void)setCacheProvider:;
- (id)cacheProvider;
@end
