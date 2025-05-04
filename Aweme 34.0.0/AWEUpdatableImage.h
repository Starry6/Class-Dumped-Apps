@interface AWEUpdatableImage : UIImage
@property (nonatomic) UIImage realImage;
@property (nonatomic) NSHashTable imageViews;
@property (nonatomic) NSMapTable buttonsBkg;
@property (nonatomic) NSMapTable buttons;
- (void)updateImageWithSkinResolveBlock:;
- (void)setRealImage:;
- (id)buttonsBkg;
- (id)realImage;
- (void)addToImageView:;
- (void)removeFromImageView:;
- (void)addToButton:forState:;
- (void)removeFromButton:forState:;
- (void)addToButtonBackground:forState:;
- (void)removeFromButtonBackground:forState:;
- (void)setButtonsBkg:;
- (void)setButtons:;
- (id)buttons;
- (void).cxx_destruct;
- (id)imageViews;
- (void)setImageViews:;
- (void)updateImage:;
@end
