@interface VEVideoReaderUnitConfig : NSObject
@property (nonatomic) BOOL infostickerTextureRelease;
@property (nonatomic) BOOL alwaysFirstFrame;
@property (nonatomic) VEVideoFillConfig videoFillConfig;
@property (nonatomic) NSInteger exportFps;
- (id)videoFillConfig;
- (BOOL)alwaysFirstFrame;
- (int)exportFps;
- (BOOL)infostickerTextureRelease;
- (void)setAlwaysFirstFrame:;
- (void)setExportFps:;
- (void)setInfostickerTextureRelease:;
- (void)setVideoFillConfig:;
- (void).cxx_destruct;
@end
