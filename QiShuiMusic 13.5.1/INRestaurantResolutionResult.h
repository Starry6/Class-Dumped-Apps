@interface INRestaurantResolutionResult : INIntentResolutionResult
+ (id)successWithResolvedRestaurant:;
+ (id)disambiguationWithRestaurantsToDisambiguate:;
+ (id)confirmationRequiredWithRestaurantToConfirm:;
@end
