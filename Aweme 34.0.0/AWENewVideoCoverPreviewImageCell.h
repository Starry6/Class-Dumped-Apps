@interface AWENewVideoCoverPreviewImageCell : UICollectionViewCell
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEDetailCellTagLabel topLeftTagLabel;
@property (nonatomic) UIView bgMaskView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithModel:;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (id)topLeftTagLabel;
- (void)setTopLeftTagLabel:;
- (void)updateCoverWithCompletion:;
- (void)setModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
@end
