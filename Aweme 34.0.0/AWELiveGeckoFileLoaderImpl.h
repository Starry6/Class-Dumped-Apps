@interface AWELiveGeckoFileLoaderImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerPrefetchChannels:;
- (id)prefetchDataForPath:accessKey:channel:;
- (id)stringWithPath:forChannel:;
@end
