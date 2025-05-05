@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest
@property (nonatomic) PHMediaFormatConversionRequest independentRequest;
@property (nonatomic) PHMediaFormatConversionRequest dependentRequest;
@property (nonatomic) @? successUpdateHandler;
- (void).cxx_destruct;
- (void)enqueueSubrequestsOnConversionManager:;
- (void)enumerateSubrequests:;
- (void)postProcessSuccessfulCompositeRequest;
- (id)independentRequest;
- (void)setIndependentRequest:;
- (id)dependentRequest;
- (void)setDependentRequest:;
- (id)successUpdateHandler;
- (void)setSuccessUpdateHandler:;
+ (id)requestForSource:destinationCapabilities:error:;
+ (id)chainedRequestForAdjustmentRenderRequest:dependingOnRequest:error:;
+ (id)chainedRequestForRequest:dependingOnRequest:error:successUpdateHandler:;
@end
