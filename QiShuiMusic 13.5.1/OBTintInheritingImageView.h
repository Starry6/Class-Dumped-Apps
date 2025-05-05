@interface OBTintInheritingImageView : UIImageView
@property (nonatomic) UIImage originalImage;
- (void)setImage:;
- (void)tintColorDidChange;
- (void)setOriginalImage:;
- (id)initWithImage:highlightedImage:tintColor:;
- (void).cxx_destruct;
- (id)originalImage;
@end
