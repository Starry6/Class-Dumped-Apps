@interface MKArtworkImageView : UIImageView
@property (nonatomic) UIImageView badgeView;
@property (nonatomic) <MKArtworkImageSource> imageSource;
@property (nonatomic) UIColor primaryTintColor;
@property (nonatomic) UIColor secondaryTintColor;
- (id)badgeView;
- (void)setImage:;
- (void)setPrimaryTintColor:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)secondaryTintColor;
- (void)_updateImageView;
- (void)setSecondaryTintColor:;
- (id)primaryTintColor;
- (void).cxx_destruct;
- (void)setImageSource:;
- (id)imageSource;
@end
