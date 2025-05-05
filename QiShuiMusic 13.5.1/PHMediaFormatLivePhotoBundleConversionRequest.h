@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest
@property (nonatomic) PHMediaFormatLivePhotoConversionRequest livePhotoConversionRequest;
- (BOOL)prepareWithError:;
- (void).cxx_destruct;
- (void)enqueueSubrequestsOnConversionManager:;
- (void)enumerateSubrequests:;
- (void)postProcessSuccessfulCompositeRequest;
- (id)livePhotoConversionRequest;
- (void)setLivePhotoConversionRequest:;
@end
