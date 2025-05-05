@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest
@property (nonatomic) PHMediaFormatConversionRequest imageConversionRequest;
@property (nonatomic) PHMediaFormatConversionRequest videoConversionRequest;
- (void).cxx_destruct;
- (void)didPreflightSubrequest:;
- (void)enqueueSubrequestsOnConversionManager:;
- (void)enumerateSubrequests:;
- (id)imageConversionRequest;
- (void)setImageConversionRequest:;
- (id)videoConversionRequest;
- (void)setVideoConversionRequest:;
+ (id)requestForSource:destinationCapabilities:error:;
+ (id)requestForImageConversionRequest:videoConversionRequest:error:;
@end
