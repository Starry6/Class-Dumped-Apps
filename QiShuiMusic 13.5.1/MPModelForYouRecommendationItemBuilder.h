@interface MPModelForYouRecommendationItemBuilder : NSObject
@property (nonatomic) MPPropertySet requestedPropertySet;
@property (nonatomic) NSDictionary storeItemMetadataResults;
@property (nonatomic) MPMutableSectionedCollection flatSectionedItems;
- (void).cxx_destruct;
- (id)requestedPropertySet;
- (id)storeItemMetadataResults;
- (id)flatSectionedItems;
- (id)modelObjectForRecommendationChildDictionary:parentGroup:subgroupsAccumulator:userIdentity:;
- (id)initWithRequestedPropertySet:storeItemMetadataResults:flatSectionedItems:;
+ (id)allSupportedProperties;
@end
