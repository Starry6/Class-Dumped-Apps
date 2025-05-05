@interface AVMDLDataLoaderItem : NSObject
@property (nonatomic) Q preloadSize;
@property (nonatomic) Q preloadOffset;
@property (nonatomic) NSString key;
@property (nonatomic) NSString rawKey;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString quary;
@property (nonatomic) NSString proxyUrl;
- (void)setPreloadSize:;
- (unsigned long long)preloadOffset;
- (unsigned long long)preloadSize;
- (id)proxyUrl;
- (id)quary;
- (void)setPreloadOffset:;
- (void)setProxyUrl:;
- (void)setQuary:;
- (id)urls;
- (id)key;
- (void)setUrls:;
- (void)setKey:;
- (void).cxx_destruct;
- (void)setRawKey:;
- (id)rawKey;
+ (id)item:offset:key:rawKey:urls:;
@end
