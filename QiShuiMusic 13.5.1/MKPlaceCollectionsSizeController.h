@interface MKPlaceCollectionsSizeController : NSObject
@property (nonatomic) {UIEdgeInsets=dddd} sectionInset;
@property (nonatomic) double defaultCollectionHeight;
@property (nonatomic) double defaultCollectionWidth;
@property (nonatomic) {?=qq} collectionsConfiguration;
@property (nonatomic) BOOL isSingleCollection;
@property (nonatomic) BOOL isMarzipan;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSectionInset:;
- (id)sectionInset;
- (double)minimumInterItemSpacing;
- (id)sectionInsets;
- (id)sizeForCollectionWithMaxCollectionsWidth:;
- (id)initWithDefaultCollectionsConfigurationUsingTraitCollections:inContext:;
- (id)initWithCollectionsConfiguration:isSingleCollection:usingTraitCollections:inContext:;
- (double)defaultCollectionHeight;
- (void)setDefaultCollectionHeight:;
- (double)defaultCollectionWidth;
- (void)setDefaultCollectionWidth:;
- (id)collectionsConfiguration;
- (void)setCollectionsConfiguration:;
- (BOOL)isSingleCollection;
- (void)setIsSingleCollection:;
- (BOOL)isMarzipan;
- (void)setIsMarzipan:;
@end
