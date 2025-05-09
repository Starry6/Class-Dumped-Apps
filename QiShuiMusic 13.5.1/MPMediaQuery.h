@interface MPMediaQuery : NSObject
@property (nonatomic) MPMediaPlaylist containingPlaylist;
@property (nonatomic) MPMediaItemCollection collectionByJoiningCollections;
@property (nonatomic) MPMediaLibrary mediaLibrary;
@property (nonatomic) NSSet itemPropertiesToFetch;
@property (nonatomic) NSSet collectionPropertiesToFetch;
@property (nonatomic) NSArray orderingProperties;
@property (nonatomic) NSDictionary orderingDirectionMappings;
@property (nonatomic) BOOL sortItems;
@property (nonatomic) BOOL useSections;
@property (nonatomic) Q entityLimit;
@property (nonatomic) BOOL _hasItems;
@property (nonatomic) BOOL _hasCollections;
@property (nonatomic) Q _countOfItems;
@property (nonatomic) Q _countOfCollections;
@property (nonatomic) BOOL _hasStaticEntities;
@property (nonatomic) NSArray itemPersistentIdentifiers;
@property (nonatomic) NSArray collectionPersistentIdentifiers;
@property (nonatomic) MPMediaQuerySectionInfo itemSectionInfo;
@property (nonatomic) MPMediaQuerySectionInfo collectionSectionInfo;
@property (nonatomic) BOOL excludesEntitiesWithBlankNames;
@property (nonatomic) BOOL includeEntitiesWithBlankNames;
@property (nonatomic) BOOL specifiesPlaylistItems;
@property (nonatomic) BOOL shouldIncludeNonLibraryEntities;
@property (nonatomic) BOOL willGroupEntities;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (nonatomic) MPMediaItemCollection _representativeCollection;
@property (nonatomic) q _representativeCollectionGroupingType;
@property (nonatomic) BOOL playlistItemsQuery;
@property (nonatomic) NSSet filterPredicates;
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray collections;
@property (nonatomic) q groupingType;
@property (nonatomic) NSArray itemSections;
@property (nonatomic) NSArray collectionSections;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIgnoreRestrictionsPredicates:;
- (BOOL)ignoreSystemFilterPredicates;
- (void)setCriteria:;
- (BOOL)ignoreRestrictionsPredicates;
- (void)setIgnoreSystemFilterPredicates:;
- (id)initWithEntities:entityType:;
- (id)init;
- (void)setStaticEntities:entityType:;
- (id)collections;
- (BOOL)excludesEntitiesWithBlankNames;
- (BOOL)_hasCollections;
- (id)criteria;
- (id)mediaLibrary;
- (void)setMediaLibrary:;
- (id)protobufferEncodableObject;
- (unsigned long long)entityLimit;
- (id)itemPersistentIdentifiers;
- (void)_enumerateItemsUsingBlock:;
- (id)containingPlaylist;
- (void)_enumerateItemPersistentIDsInOrder:usingBlock:;
- (id)valueForAggregateFunction:onItemsForProperty:;
- (void)_enumerateItemPersistentIDsUsingBlock:;
- (id)MPSD_mediaQueryForDownloadableEntities;
- (id)itemSections;
- (void)addFilterPredicate:;
- (void)_enumerateUnorderedCollectionsUsingBlock:;
- (id)items;
- (id)collectionSectionInfo;
- (id)collectionPersistentIdentifiers;
- (BOOL)includeEntitiesWithBlankNames;
- (void)setUseSections:;
- (void)_setOrderingProperties:;
- (id)_orderingProperties;
- (long long)_representativeCollectionGroupingType;
- (unsigned long long)groupingThreshold;
- (BOOL)specifiesPlaylistItems;
- (id)initWithFilterPredicates:library:;
- (void)setItemPropertiesToFetch:;
- (BOOL)_hasStaticEntities;
- (void)setGroupingType:;
- (void)setShouldIncludeNonLibraryEntities:;
- (id)initWithCoder:;
- (void)setSortItems:;
- (unsigned long long)hash;
- (id)initWithFilterPredicates:;
- (BOOL)_isFilteringDisabled;
- (id)itemPropertiesToFetch;
- (void)setFilterPredicate:forProperty:;
- (unsigned long long)_playlistItemPersistentIDForItemPersistentID:;
- (void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:;
- (BOOL)willGroupEntities;
- (BOOL)MPSD_hasDownloadingEntities;
- (void)encodeWithCoder:;
- (void)_enumerateCollectionPersistentIDsUsingBlock:;
- (BOOL)isPlaylistItemsQuery;
- (id)MPSD_mediaQueryForDownloadingEntities;
- (long long)groupingType;
- (id)initWithProtobufferDecodableObject:library:;
- (id)valueForAggregateFunction:onCollectionsForProperty:;
- (void)_enumerateUnorderedItemPersistentIDsUsingBlock:;
- (id)collectionByJoiningCollections;
- (id)initWithCriteria:library:;
- (unsigned long long)_countOfItems;
- (id)predicateForProperty:;
- (id)protobufferEncodableObjectFromLibrary:;
- (void).cxx_destruct;
- (void)_setOrderingDirectionMappings:;
- (void)removeFilterPredicate:;
- (id)filterPredicates;
- (void)setEntityLimit:;
- (BOOL)sortItems;
- (id)copyBySanitizingStaticEntities;
- (id)_representativeCollection;
- (id)description;
- (BOOL)MPSD_hasDownloadableEntities;
- (void)_enumerateUnorderedItemsUsingBlock:;
- (id)_valueForAggregateFunction:onProperty:entityType:;
- (void)setCollectionPropertiesToFetch:;
- (unsigned long long)_countOfCollections;
- (id)initWithProtobufferDecodableObject:;
- (void)setIncludeEntitiesWithBlankNames:;
- (id)collectionSections;
- (id)itemSectionInfo;
- (id)_orderingDirectionMappings;
- (void)setFilterPredicates:;
- (BOOL)useSections;
- (void)_enumerateCollectionsUsingBlock:;
- (void)_getRepresentativeCollectionGrouping:propertyPredicate:;
- (void)setFilterPropertyPredicate:;
- (BOOL)_hasItems;
- (id)copyByRemovingStaticEntities;
- (void)_enumerateCollectionPersistentIDsInOrder:usingBlock:;
- (BOOL)isEqual:;
- (id)collectionPropertiesToFetch;
- (BOOL)_updatePredicateForProperty:withPropertyPredicate:;
- (void)_enumerateCollectionsInOrder:usingBlock:;
- (void)_enumerateItemsInOrder:usingBlock:;
- (BOOL)shouldIncludeNonLibraryEntities;
- (id)copyWithZone:;
- (void)removePredicatesForProperty:;
+ (id)moviesQuery;
+ (id)homeVideosQuery;
+ (id)albumArtistsQuery;
+ (id)audibleAudiobooksQuery;
+ (id)podcastsQuery;
+ (BOOL)supportsSecureCoding;
+ (id)ITunesUQuery;
+ (id)videosQuery;
+ (id)compilationsQuery;
+ (id)songsQuery;
+ (id)musicVideosQuery;
+ (id)tvShowsQuery;
+ (void)setFilteringDisabled:;
+ (id)playlistsQuery;
+ (id)audioPodcastsQuery;
+ (id)ITunesUAudioQuery;
+ (id)genresQuery;
+ (BOOL)isFilteringDisabled;
+ (id)artistsQuery;
+ (id)playlistsRecentlyAddedQuery;
+ (id)geniusMixesQuery;
+ (id)albumsQuery;
+ (id)currentDevicePurchasesPlaylist;
+ (void)initFilteringDisabled;
+ (id)activeGeniusPlaylist;
+ (id)videoPodcastsQuery;
+ (id)playbackHistoryPlaylist;
+ (id)audiobooksQuery;
+ (id)movieRentalsQuery;
+ (id)videoITunesUQuery;
+ (id)composersQuery;
@end
