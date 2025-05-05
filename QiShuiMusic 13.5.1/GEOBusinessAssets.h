@interface GEOBusinessAssets : NSObject
@property (nonatomic) NSArray coverPhotos;
@property (nonatomic) NSArray croppedPhotos;
@property (nonatomic) <GEOMapItemPhoto> coverPhoto;
@property (nonatomic) <GEOMapItemPhoto> croppedPhoto;
- (void).cxx_destruct;
- (id)initWithBusinessAssets:;
- (id)coverPhoto;
- (id)croppedPhoto;
- (id)coverPhotos;
- (id)croppedPhotos;
+ (id)businessAssetsWithPlaceData:;
@end
