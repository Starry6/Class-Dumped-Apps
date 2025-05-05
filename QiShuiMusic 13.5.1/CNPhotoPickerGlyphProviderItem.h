@interface CNPhotoPickerGlyphProviderItem : CNPhotoPickerProviderItem
@property (nonatomic) UIView symbolImageView;
@property (nonatomic) NSString symbolImageName;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) Q addItemType;
- (unsigned long long)imageType;
- (id)symbolImageName;
- (void)setSymbolImageName:;
- (id)tintColor;
- (id)backgroundColorWithTintColor:;
- (void).cxx_destruct;
- (void)setTintColor:;
- (void)thumbnailViewWithCompletion:;
- (void)updateTintColorIfNeeded:;
- (id)initWithSymbolImageNamed:withAddItemType:;
- (id)initWithSymbolImageNamed:;
- (id)symbolImageView;
- (void)setupSymbolImageView;
- (long long)scaleForImageNamed:;
- (id)imageForImageNamed:withTintColor:;
- (unsigned long long)addItemType;
- (void)setAddItemType:;
- (void)setSymbolImageView:;
+ (id)thumbnailViewForImage:;
@end
