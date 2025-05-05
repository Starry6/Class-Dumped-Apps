@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest
- (BOOL)isCompositeRequest;
- (void)setupProgress;
- (void)preflightWithConversionManager:;
- (BOOL)requiresLocationMetadataChange;
- (BOOL)requiresCreationDateMetadataChange;
- (BOOL)requiresCaptionMetadataChange;
- (BOOL)requiresAccessibilityDescriptionMetadataChange;
- (BOOL)requiresFormatConversion;
- (void)didFinishProcessing;
- (void)didPreflightSubrequest:;
- (BOOL)areAllSubrequestsPreflighted;
- (id)compositeRequestCommonInitWithError:;
- (void)enqueueSubrequestsOnConversionManager:;
- (void)enumerateSubrequests:;
- (void)propagateRequestOptionsToSubrequests;
- (void)postProcessSuccessfulCompositeRequest;
@end
