@interface SYItemIndexingManager : NSObject
+ (void)indexedContentItemsDidChange;
+ (id)_customKeyForKey:;
+ (id)searchableItemLinkingContentItem:toContainerIdentifier:uniqueIdentifier:relatedIdentifier:domainIdentifier:;
+ (id)searchableItemLinkingContentItem:toContainerIdentifier:relatedIdentifier:domainIdentifier:;
+ (void)_fetchIndexedItemsLinkedToUserActivity:extraFetchAttributes:completion:;
+ (void)fetchIdentifiersLinkedToUserActivity:completion:;
+ (void)_fetchIndexedActivitiesWithActivityType:completion:;
+ (void)fetchActivitiesWithActivityType:completion:;
+ (void)fetchLinkContextsDataForUserActivity:completion:;
+ (id)_coreSpotlightIndexBundleID;
+ (id)_queryStringForMatchingUserActivityInfo:;
+ (id)_postFilteredItems:matchingUserActivityInfo:;
+ (void)setUseLocalSearchIndex;
@end
