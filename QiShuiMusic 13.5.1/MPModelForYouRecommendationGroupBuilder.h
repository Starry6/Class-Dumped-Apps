@interface MPModelForYouRecommendationGroupBuilder : NSObject
@property (nonatomic) MPPropertySet requestedGroupPropertySet;
@property (nonatomic) MPPropertySet requestedItemPropertySet;
@property (nonatomic) NSDictionary storeItemMetadataResults;
@property (nonatomic) MPMutableSectionedCollection flatSectionedItems;
- (void).cxx_destruct;
- (id)modelObjectForRecommendationDictionary:userIdentity:;
- (id)requestedGroupPropertySet;
- (id)requestedItemPropertySet;
- (id)storeItemMetadataResults;
- (id)flatSectionedItems;
- (id)initWithRequestedGroupPropertySet:requestedItemPropertySet:storeItemMetadataResults:flatSectionedItems:;
+ (id)allSupportedItemProperties;
+ (id)allSupportedGroupProperties;
@end
