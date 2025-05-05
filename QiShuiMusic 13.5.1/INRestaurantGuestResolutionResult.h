@interface INRestaurantGuestResolutionResult : INIntentResolutionResult
+ (id)successWithResolvedRestaurantGuest:;
+ (id)disambiguationWithRestaurantGuestsToDisambiguate:;
+ (id)confirmationRequiredWithRestaurantGuestToConfirm:;
@end
