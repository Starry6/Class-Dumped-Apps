@interface IESLiveEffectPCDNDownloader : NSObject
@property (nonatomic) IESLivePCDNLaunchConfig launchConfig;
@property (nonatomic) <IESLivePCDNDownloadService> pcdnDownloadService;
@property (nonatomic) IESLiveEffectDownloadTrackHandler trackHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_downloadCacheURLStrWithAssetId:;
- (void)downloadGiftWithURL:assetId:fileUniqId:progress:completed:;
- (id)launchConfig;
- (id)pcdnDownloadService;
- (void)setLaunchConfig:;
- (void)setPcdnDownloadService:;
- (void)setTrackHandler:;
- (id)trackHandler;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
