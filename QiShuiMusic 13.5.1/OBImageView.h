@interface OBImageView : UIImageView
- (id)initWithImage:;
- (void)setImage:;
- (void)traitCollectionDidChange:;
- (id)initWithImage:highlightedImage:;
- (void)setHighlightedImage:;
- (id)_image:forUserInterfaceStyle:;
@end
