@interface AWELocalLifeGeckoManager : NSObject
@property (nonatomic) NSMutableArray prefetchChannels;
- (void)setPrefetchChannels:;
- (void)prefetchInLocalLife;
- (void)prefetchWithUrls:;
- (id)prefetchChannels;
- (id)filterChannels:;
- (void)trackChannelDownloadWithChannelName:result:;
- (void)prefetchInCodeStart;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
