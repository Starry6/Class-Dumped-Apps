@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest
@property (nonatomic) NSArray subrequests;
- (BOOL)prepareWithError:;
- (id)outputFileType;
- (void).cxx_destruct;
- (id)outputPathExtension;
- (BOOL)requiresMetadataChanges;
- (BOOL)requiresFormatConversion;
- (void)enqueueSubrequestsOnConversionManager:;
- (void)enumerateSubrequests:;
- (void)postProcessSuccessfulCompositeRequest;
- (id)subrequests;
- (void)setSubrequests:;
@end
