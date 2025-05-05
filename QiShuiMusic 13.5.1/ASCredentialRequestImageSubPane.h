@interface ASCredentialRequestImageSubPane : ASCredentialRequestSubPane
@property (nonatomic) UIImageView imageView;
@property (nonatomic) q imageStyle;
- (id)initWithImage:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)imageView;
- (long long)imageStyle;
- (void)addToStackView:withCustomSpacingAfter:context:;
- (id)initWithImage:imageStyle:;
+ (id)_imageViewWithImage:imageStyle:;
+ (id)_appIconViewWithImage:;
+ (id)_customIconViewWithImage:;
+ (id)_systemIconViewWithImage:;
@end
