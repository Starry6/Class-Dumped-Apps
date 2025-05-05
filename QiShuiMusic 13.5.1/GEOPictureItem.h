@interface GEOPictureItem : NSObject
@property (nonatomic) <GEOMapItemPhoto> photo;
@property (nonatomic) NSInteger pictureItemPhotoType;
@property (nonatomic) NSString primaryText;
@property (nonatomic) NSString secondaryText;
- (id)primaryText;
- (id)init;
- (id)secondaryText;
- (void).cxx_destruct;
- (id)photo;
- (int)pictureItemPhotoType;
- (id)initWithPhoto:pictureItemPhotoType:primaryText:secondaryText:;
- (id)initWithPictureItem:;
@end
