@interface EDRemoteContentCacheConfiguration : NSObject
@property (nonatomic) NSURL cacheURL;
@property (nonatomic) Q diskCapacity;
- (void).cxx_destruct;
- (unsigned long long)diskCapacity;
- (id)cacheURL;
- (id)initWithBaseURL:diskCapacity:;
- (id)_cacheURLWithBaseURL:;
@end
