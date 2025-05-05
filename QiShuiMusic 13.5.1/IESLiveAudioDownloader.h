@interface IESLiveAudioDownloader : NSObject
@property (nonatomic) NSMutableDictionary downloadingItems;
@property (nonatomic) <IESLiveAudioCacheProvider> audioCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioCache;
- (void)downloadAudioWith:completion:;
- (id)downloadingItems;
- (void)setAudioCache:;
- (void)setDownloadingItems:;
- (void).cxx_destruct;
- (void)cancelAll;
@end
