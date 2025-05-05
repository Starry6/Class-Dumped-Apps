@interface MPModelForYouRecommendationItem : MPModelObject
@property (nonatomic) Q itemType;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString utterance;
@property (nonatomic) MPModelAlbum album;
@property (nonatomic) MPModelPlaylist playlist;
@property (nonatomic) MPModelRadioStation radioStation;
@property (nonatomic) MPModelForYouRecommendationGroup parentGroup;
@property (nonatomic) q subgroupIndex;
@property (nonatomic) BOOL backedByStoreItemMetadata;
@property (nonatomic) MPModelForYouRecommendationGroup subgroup;
- (id)subgroup;
- (id)personalizationScopedPropertiesForProperties:;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:;
+ (id)__itemType_KEY;
+ (id)__playlist_KEY;
+ (id)__album_KEY;
+ (id)__radioStation_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__url_KEY;
+ (id)__reason_KEY;
+ (id)__utterance_KEY;
+ (id)__backedByStoreItemMetadata_KEY;
+ (id)__parentGroup_KEY;
+ (id)__subgroupIndex_KEY;
@end
