@interface SSItemImageCollection : NSObject
@property (nonatomic) NSArray itemImages;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)copyWithZone:;
- (id)initWithImageCollection:;
- (id)initWithItemImages:;
- (id)bestImageForSize:;
- (id)imagesForSize:;
- (id)imagesForKind:;
- (id)_imagesForSize:scale:;
- (id)_newImagesForDictionary:;
- (id)itemImages;
@end
