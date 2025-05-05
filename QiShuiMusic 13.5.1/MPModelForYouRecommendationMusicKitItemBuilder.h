@interface MPModelForYouRecommendationMusicKitItemBuilder : NSObject
@property (nonatomic) MPPropertySet requestedPropertySet;
@property (nonatomic) NSDictionary storeItemMetadataResults;
@property (nonatomic) MPMutableSectionedCollection flatSectionedItems;
- (void).cxx_destruct;
- (id)requestedPropertySet;
- (id)storeItemMetadataResults;
- (id)flatSectionedItems;
- (id)initWithRequestedPropertySet:storeItemMetadataResults:flatSectionedItems:storeURLBag:isListenNow:;
- (id)modelObjectForRecommendationChildDictionary:parentGroup:subgroupsAccumulator:userIdentity:;
- (id)storeItemMetadataWithMusicAPIMetadataDictionary:;
- (id)convertToStoreItemMetadataDictionary:;
+ (id)allSupportedProperties;
@end
