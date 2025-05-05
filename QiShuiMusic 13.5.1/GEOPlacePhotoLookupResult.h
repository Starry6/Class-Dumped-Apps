@interface GEOPlacePhotoLookupResult : NSObject
@property (nonatomic) NSArray photos;
@property (nonatomic) GEOMapItemIdentifier mapItemIdentifier;
@property (nonatomic) Q totalPhotoCount;
- (void).cxx_destruct;
- (id)photos;
- (unsigned long long)totalPhotoCount;
- (id)initWithPhotos:totalPhotoCount:mapItemItemIdentifier:originalRange:;
- (id)mapItemIdentifier;
+ (void)buildVendorLookupResultForPlaceWithCaptionedPhotos:mapItemIdentifier:originalRange:completion:;
+ (void)buildLookupResultForPlaceWithPhotoCategories:mapItemIdentifier:originalRange:completion:;
@end
