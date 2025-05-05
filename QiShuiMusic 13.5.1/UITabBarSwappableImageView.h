@interface UITabBarSwappableImageView : UIImageView
- (void)setLandscape:;
- (void)setCurrentImage;
- (void)setImage:;
- (void)showAlternateImage:;
- (void)setAlternateImage:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)initWithImage:alternateImage:landscapeImage:landscapeAlternateImage:;
- (void)didMoveToWindow;
- (id)_selectedImage;
- (id)_unselectedImage;
- (id)_selectedCompactImage;
- (id)_unselectedCompactImage;
@end
