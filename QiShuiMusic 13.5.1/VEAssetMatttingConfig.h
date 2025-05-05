@interface VEAssetMatttingConfig : NSObject
@property (nonatomic) NSString resultPath;
@property (nonatomic) VEVideoConfig videoConfig;
@property (nonatomic) Q readerType;
@property (nonatomic) AVAsset asset;
@property (nonatomic) {?=qiIq} currentTime;
- (void)setVideoConfig:;
- (unsigned long long)readerType;
- (id)resultPath;
- (void)setReaderType:;
- (void)setResultPath:;
- (id)videoConfig;
- (void)setCurrentTime:;
- (id)init;
- (id)asset;
- (void).cxx_destruct;
- (id)currentTime;
- (void)setAsset:;
@end
