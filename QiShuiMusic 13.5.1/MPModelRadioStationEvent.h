@interface MPModelRadioStationEvent : MPModelObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) @? artworkCatalogBlock;
@property (nonatomic) @? heroArtworkCatalogBlock;
- (id)artworkCatalog;
- (id)heroArtworkCatalog;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__descriptionText_KEY;
+ (id)__title_KEY;
+ (id)__startTime_KEY;
+ (id)__endTime_KEY;
+ (id)__heroArtworkCatalogBlock_KEY;
@end
