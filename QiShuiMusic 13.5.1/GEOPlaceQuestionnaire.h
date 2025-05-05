@interface GEOPlaceQuestionnaire : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) NSArray ratingCategories;
@property (nonatomic) BOOL alwaysPositionInitialRatingCtaTowardsTop;
@property (nonatomic) BOOL canCollectRatings;
@property (nonatomic) BOOL canCollectPhotos;
@property (nonatomic) BOOL canShowCallToAction;
@property (nonatomic) Q maximumNumberOfPhotos;
- (id)version;
- (void).cxx_destruct;
- (id)initWithGEOPDPlaceQuestionnaire:;
- (BOOL)canCollectRatings;
- (BOOL)canShowCallToAction;
- (id)ratingCategories;
- (BOOL)alwaysPositionInitialRatingCtaTowardsTop;
- (BOOL)canCollectPhotos;
- (unsigned long long)maximumNumberOfPhotos;
@end
