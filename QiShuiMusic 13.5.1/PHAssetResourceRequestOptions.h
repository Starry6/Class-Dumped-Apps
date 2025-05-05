@interface PHAssetResourceRequestOptions : NSObject
@property (nonatomic) BOOL resistentToPrune;
@property (nonatomic) BOOL downloadIsTransient;
@property (nonatomic) q downloadIntent;
@property (nonatomic) q downloadPriority;
@property (nonatomic) BOOL pruneAfterAvailableOnLowDisk;
@property (nonatomic) NSNumber pruneAfterAvailableLowDiskThresholdBytes;
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) @? progressHandler;
- (void)setProgressHandler:;
- (id)progressHandler;
- (void)setDownloadIntent:;
- (long long)downloadPriority;
- (long long)downloadIntent;
- (BOOL)isNetworkAccessAllowed;
- (void).cxx_destruct;
- (void)setDownloadPriority:;
- (void)setNetworkAccessAllowed:;
- (id)copyWithZone:;
- (BOOL)resistentToPrune;
- (void)setResistentToPrune:;
- (BOOL)downloadIsTransient;
- (void)setDownloadIsTransient:;
- (BOOL)pruneAfterAvailableOnLowDisk;
- (void)setPruneAfterAvailableOnLowDisk:;
- (id)pruneAfterAvailableLowDiskThresholdBytes;
- (void)setPruneAfterAvailableLowDiskThresholdBytes:;
@end
