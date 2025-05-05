@interface GEOCaptionedPhotoAlbum : NSObject
@property (nonatomic) NSString categoryName;
@property (nonatomic) NSString categoryId;
@property (nonatomic) NSArray photoList;
@property (nonatomic) Q totalNumberOfPhotosAvailable;
- (void).cxx_destruct;
- (id)description;
- (id)categoryName;
- (id)categoryId;
- (id)initWithCaptionedPhotoCategory:attributionMap:;
- (void)_buildPhotoList;
- (unsigned long long)totalNumberOfPhotosAvailable;
- (id)photoList;
@end
