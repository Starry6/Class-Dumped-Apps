@interface AWEPayScanInfoManager : NSObject
@property (nonatomic) NSTimer imageCleanTimer;
@property (nonatomic) AWEPayScanImageInfo scanImageInfo;
@property (nonatomic) AWEPayScanMetaInfo scanMetaInfo;
- (void)saveScanInfo:;
- (id)scanMetaInfo;
- (void)cleanScanImage;
- (id)scanImageInfo;
- (void)buildScanInfo:;
- (void)buildMetaInfoWithScanInfo:;
- (void)buildImageInfoWithScanInfo:;
- (void)cleanScanMeta;
- (void)setScanMetaInfo:;
- (void)setScanImageInfo:;
- (void)setupImageCleanTimer;
- (id)imageCleanTimer;
- (void)setImageCleanTimer:;
- (unsigned long long)scanImageCleanTimeOut;
- (void).cxx_destruct;
- (void)clean;
+ (void)saveScanInfo:;
+ (id)scanMetaInfo;
+ (void)cleanScanImage;
+ (id)scanImageInfo;
+ (id)sharedInstance;
@end
