@interface MPModelStoreRadioMusicKitRequestOperation : MPModelStoreGroupingsMusicKitRequestOperation
- (void)produceResponseWithLoadedOutput:completion:;
- (id)recentlyPlayedURLWithStoreURLBag:;
- (id)additionalURLRequestsWithStoreURLBag:;
- (id)additionalCatalogURLQueryItems;
- (id)groupingNameBagKey;
- (id)groupingNameWithMusicSubscriptionDictionary:;
- (id)rootObjectIdentifierWithSubscriptionStatus:;
- (id)recentlyPlayedSectionWithTitle:;
- (long long)radioStationTypeFromKind:;
- (long long)radioStationSubTypeFromSubType:;
- (id)recentlyPlayedItemsWithAPILoadedOutput:;
- (id)recentlyPlayedItemWithDictionary:;
- (id)radioStationWithDictionary:;
@end
