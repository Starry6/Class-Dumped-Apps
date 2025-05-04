@interface AWEOfflineVideoSingleResourceModel : AWEOfflineVideoResourceModel
@property (nonatomic) double startDownloadTime;
@property (nonatomic) AWEOfflineMixVideoCacheInfoModel mixInfo;
@property (nonatomic) Q status;
@property (nonatomic) double downloadSpeedKB;
@property (nonatomic) BOOL hasWatched;
- (id)awemeModel;
- (id)initWithAwemeModel:;
- (id)mixInfo;
- (double)startDownloadTime;
- (void)setStartDownloadTime:;
- (void)setMixInfo:;
- (void)deleteFile;
- (BOOL)hasWatched;
- (void)setHasWatched:;
- (void)deleteInvalidVideo;
- (double)downloadSpeedKB;
- (void)setDownloadSpeedKB:;
- (unsigned long long)hash;
- (void)setStatus:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setCacheSize:;
- (id)statusString;
- (BOOL)isEqual:;
+ (BOOL)videoHasCachesWithFileHash:;
+ (BOOL)audioHasCachesWithFileHash:;
@end
