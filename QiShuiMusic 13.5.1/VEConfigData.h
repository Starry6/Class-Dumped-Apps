@interface VEConfigData : NSObject
@property (nonatomic) HTSVideoData videoData;
@property (nonatomic) VETransData transData;
@property (nonatomic) NSString smartCodecModel;
@property (nonatomic) NSString smartCodecParams;
@property (nonatomic) HTSGLContext htsGLContext;
@property (nonatomic) {CGSize=dd} videoSize;
@property (nonatomic) double keyframeIntervalDuration;
@property (nonatomic) NSString videoProfileLevel;
@property (nonatomic) NSString videoEntropyMode;
@property (nonatomic) q compileBiterate;
@property (nonatomic) NSInteger videoRotation;
@property (nonatomic) {CGSize=dd} normalizeSize;
@property (nonatomic) BOOL needRestoreInfoSticker;
@property (nonatomic) BOOL allowFrameReordering;
@property (nonatomic) BOOL allowRealTime;
@property (nonatomic) @? completeBlock;
@property (nonatomic) AVAsset asset;
@property (nonatomic) AVVideoComposition videoCompostion;
@property (nonatomic) UIImage watermarkImage;
@property (nonatomic) float watermarkDuration;
@property (nonatomic) BOOL useNewMudule;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL enableNewOldEngineCoexist;
@property (nonatomic) NSString licenseType;
@property (nonatomic) BOOL noNeedReverse;
@property (nonatomic) BOOL infoStickerForceAmazing;
@property (nonatomic) NSInteger exportFps;
@property (nonatomic) BOOL enableOptExportFps;
@property (nonatomic) BOOL useGlobalEffectGroup;
@property (nonatomic) BOOL disableEffectGroup;
@property (nonatomic) BOOL useMVMultiProcessFilter;
@property (nonatomic) BOOL disableInfoSticker;
@property (nonatomic) BOOL disableTransition;
@property (nonatomic) BOOL infostickerTextureRelease;
@property (nonatomic) BOOL needResetFiltersMananger;
@property (nonatomic) BOOL disableExtracFilter;
@property (nonatomic) BOOL isUsedForExport;
@property (nonatomic) {CGSize=dd} previewSize;
@property (nonatomic) BOOL enableKeyFrameFeature;
@property (nonatomic) BOOL encodeUseFenceRender;
@property (nonatomic) BOOL disableEffectProcess;
@property (nonatomic) VEVideoFillConfig videoFillConfig;
@property (nonatomic) BOOL enablePhotoFirstFrameOpt;
@property (nonatomic) VEAnimatedImageInfo imageInfo;
@property (nonatomic) BOOL canTranscoderInBackGround;
@property (nonatomic) BOOL disableEditSizeLimit;
@property (nonatomic) BOOL enableEffectAfterCanvas;
- (BOOL)isUsedForExport;
- (id)smartCodecModel;
- (id)videoFillConfig;
- (long long)compileBiterate;
- (id)videoCompostion;
- (BOOL)allowFrameReordering;
- (BOOL)allowRealTime;
- (BOOL)canTranscoderInBackGround;
- (id)completeBlock;
- (BOOL)disableEditSizeLimit;
- (BOOL)disableEffectGroup;
- (BOOL)disableEffectProcess;
- (BOOL)disableExtracFilter;
- (BOOL)disableInfoSticker;
- (BOOL)disableTransition;
- (BOOL)enableEffectAfterCanvas;
- (BOOL)enableKeyFrameFeature;
- (BOOL)enableMultiTrack;
- (BOOL)enableNewOldEngineCoexist;
- (BOOL)enableOptExportFps;
- (BOOL)enablePhotoFirstFrameOpt;
- (BOOL)encodeUseFenceRender;
- (int)exportFps;
- (id)htsGLContext;
- (BOOL)infoStickerForceAmazing;
- (BOOL)infostickerTextureRelease;
- (double)keyframeIntervalDuration;
- (BOOL)needResetFiltersMananger;
- (BOOL)needRestoreInfoSticker;
- (BOOL)noNeedReverse;
- (id)normalizeSize;
- (void)setAllowFrameReordering:;
- (void)setAllowRealTime:;
- (void)setCanTranscoderInBackGround:;
- (void)setCompileBiterate:;
- (void)setCompleteBlock:;
- (void)setDisableEditSizeLimit:;
- (void)setDisableEffectGroup:;
- (void)setDisableEffectProcess:;
- (void)setDisableExtracFilter:;
- (void)setDisableInfoSticker:;
- (void)setDisableTransition:;
- (void)setEnableEffectAfterCanvas:;
- (void)setEnableKeyFrameFeature:;
- (void)setEnableMultiTrack:;
- (void)setEnableNewOldEngineCoexist:;
- (void)setEnableOptExportFps:;
- (void)setEnablePhotoFirstFrameOpt:;
- (void)setEncodeUseFenceRender:;
- (void)setExportFps:;
- (void)setHtsGLContext:;
- (void)setInfoStickerForceAmazing:;
- (void)setInfostickerTextureRelease:;
- (void)setIsUsedForExport:;
- (void)setKeyframeIntervalDuration:;
- (void)setNeedResetFiltersMananger:;
- (void)setNeedRestoreInfoSticker:;
- (void)setNoNeedReverse:;
- (void)setNormalizeSize:;
- (void)setSmartCodecModel:;
- (void)setSmartCodecParams:;
- (void)setTransData:;
- (void)setUseGlobalEffectGroup:;
- (void)setUseMVMultiProcessFilter:;
- (void)setUseNewMudule:;
- (void)setVideoCompostion:;
- (void)setVideoData:;
- (void)setVideoEntropyMode:;
- (void)setVideoFillConfig:;
- (void)setVideoProfileLevel:;
- (void)setVideoRotation:;
- (void)setWatermarkDuration:;
- (void)setWatermarkImage:;
- (id)smartCodecParams;
- (id)transData;
- (BOOL)useGlobalEffectGroup;
- (BOOL)useMVMultiProcessFilter;
- (BOOL)useNewMudule;
- (id)videoData;
- (id)videoEntropyMode;
- (id)videoProfileLevel;
- (int)videoRotation;
- (float)watermarkDuration;
- (id)watermarkImage;
- (id)init;
- (id)asset;
- (void).cxx_destruct;
- (void)setAsset:;
- (id)copyWithZone:;
- (id)previewSize;
- (void)setPreviewSize:;
- (id)imageInfo;
- (void)setImageInfo:;
- (id)videoSize;
- (id)licenseType;
- (void)setLicenseType:;
- (void)setVideoSize:;
@end
