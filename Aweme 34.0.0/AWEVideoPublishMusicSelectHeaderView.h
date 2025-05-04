@interface AWEVideoPublishMusicSelectHeaderView : UICollectionReusableView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
@property (nonatomic) AWEMusicEditorCollectionHeaderView dotSeparatorView;
@property (nonatomic) <AWEVideoPublishMusicSelectHeaderViewDelegate> delegate;
- (id)dotSeparatorView;
- (void)setDotSeparatorView:;
- (void)setLabel:;
- (id)delegate;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setImageView:;
- (id)imageView;
- (void)tapped:;
- (void)updateImage:;
@end
