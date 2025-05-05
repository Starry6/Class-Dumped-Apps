@interface GEOPictureItemContainer : NSObject
@property (nonatomic) NSArray pictureItems;
@property (nonatomic) BOOL allowFullScreenPhoto;
- (id)init;
- (void).cxx_destruct;
- (id)pictureItems;
- (BOOL)allowFullScreenPhoto;
- (id)initWithPictureItems:allowFullScreenPhoto:;
- (id)initWithPictureItemContainer:;
@end
