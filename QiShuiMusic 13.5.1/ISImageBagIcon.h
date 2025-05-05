@interface ISImageBagIcon : ISIcon
@property (nonatomic) ISImageCache imageCache;
@property (nonatomic) NSArray images;
- (id)initWithImages:decorations:;
- (id)imageCache;
- (id)initWithImageBag:;
- (id)images;
- (void)getImageForImageDescriptor:completion:;
- (id)_generateImageWithDescriptor:;
- (void)setImageCache:;
- (id)initWithImages:;
- (id)imageForImageDescriptor:;
- (void).cxx_destruct;
- (id)decorations;
- (void)_prepareImagesForImageDescriptors:;
@end
