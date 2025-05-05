@interface MPModelForYouRecommendationsRequestOperation : MPStoreModelRequestOperation
- (id)configurationForLoadingModelDataWithStoreURLBag:error:;
- (void)produceResponseWithLoadedOutput:completion:;
- (id)_responseWithResults:personalizationResponse:;
- (id)_personalizeRecommendationGroup:flatPersonalizedSectionedItems:;
- (id)_missingContentIdentifiersInRecommendationsArray:storeItemMetadataResults:;
- (void)_produceResponseWithRecommendationsArray:storeItemMetadataResults:completion:;
@end
