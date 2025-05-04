@interface AWESelectTemplateDataProvider : NSObject
@property (nonatomic) ACCIntelligentMovieService movieService;
@property (nonatomic) BOOL hasTrackedAIUploadLoading;
@property (nonatomic) BOOL isMomentMode;
@property (nonatomic) BOOL needReTryPreExtractionFailedCase;
@property (nonatomic) BOOL canceled;
- (void)setMovieService:;
- (id)movieService;
- (void)configMovieService:;
- (void)setNeedReTryPreExtractionFailedCase:;
- (void)assetsArray:publishModel:progress:downloadCompletion:completion:;
- (void)p_assembleSegInfos:withAssets:;
- (id)p_extraParamsWithPublishModel:;
- (void)p_handleTaskStep:AndProgress:WithHandler:;
- (void)templateModel:worksAssetArray:publishModel:needReplaceMusic:progress:downloadCompletion:completion:;
- (BOOL)hasTrackedAIUploadLoading;
- (void)setHasTrackedAIUploadLoading:;
- (void)templateModel:assetsArray:publishModel:needReplaceMusic:progress:downloadCompletion:completion:;
- (void)assetsArray:publishModel:needReplaceMusic:progress:completion:;
- (BOOL)isMomentMode;
- (void)setIsMomentMode:;
- (void)templateModelTaskCancel;
- (void)reimportAssetsArrayIfNeed:;
- (BOOL)needReTryPreExtractionFailedCase;
- (BOOL)isCanceled;
- (void)setCanceled:;
- (void).cxx_destruct;
@end
