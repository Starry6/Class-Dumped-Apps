@interface MPModelForYouRecommendationMusicKitGroupBuilder : NSObject
@property (nonatomic) MPPropertySet requestedGroupPropertySet;
@property (nonatomic) MPPropertySet requestedItemPropertySet;
@property (nonatomic) NSDictionary storeItemMetadataResults;
@property (nonatomic) MPMutableSectionedCollection flatSectionedItems;
- (void).cxx_destruct;
- (id)initWithRequestedGroupPropertySet:requestedItemPropertySet:storeItemMetadataResults:flatSectionedItems:storeURLBag:isListenNow:;
- (void)initializeRequestedGroupProperties;
- (id)modelObjectForRecentlyPlayedArray:userIdentity:;
- (id)modelObjectForItemsArray:userIdentity:;
- (id)modelObjectForRecommendationDictionary:userIdentity:;
- (id)requestedGroupPropertySet;
- (id)requestedItemPropertySet;
- (id)storeItemMetadataResults;
- (id)flatSectionedItems;
+ (id)allSupportedItemProperties;
+ (id)allSupportedGroupProperties;
@end
