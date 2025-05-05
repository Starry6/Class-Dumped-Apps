@interface PIACachesInterceptor : NSObject
@property (nonatomic) YYMemoryCache caches;
@property (nonatomic) <PIACacheProcessorProtocol> cacheProcessor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheProcessor;
- (id)falconDataForURLRequest:;
- (unsigned long long)falconPriority;
- (void)setCacheProcessor:;
- (void)setCaches:;
- (BOOL)shouldInterceptForRequest:;
- (id)init;
- (void).cxx_destruct;
- (id)caches;
+ (id)sharedInterceptor;
@end
