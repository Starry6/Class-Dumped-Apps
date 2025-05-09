@interface BDXCategoryImageCellModel : BDXCategoryIndicatorCellModel
@property (nonatomic) @? loadImageCallback;
@property (nonatomic) NSString imageName;
@property (nonatomic) NSURL imageURL;
@property (nonatomic) NSString selectedImageName;
@property (nonatomic) NSURL selectedImageURL;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) BOOL imageZoomEnabled;
@property (nonatomic) double imageZoomScale;
- (double)imageZoomScale;
- (BOOL)isImageZoomEnabled;
- (id)loadImageCallback;
- (id)selectedImageName;
- (id)selectedImageURL;
- (void)setImageZoomEnabled:;
- (void)setImageZoomScale:;
- (void)setLoadImageCallback:;
- (void)setSelectedImageName:;
- (void)setSelectedImageURL:;
- (void)setImageName:;
- (id)imageName;
- (id)imageSize;
- (void).cxx_destruct;
- (void)setImageURL:;
- (id)imageURL;
- (void)setImageSize:;
- (void)setImageCornerRadius:;
- (double)imageCornerRadius;
@end
