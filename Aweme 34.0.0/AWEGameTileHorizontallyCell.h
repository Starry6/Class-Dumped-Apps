@interface AWEGameTileHorizontallyCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton playButton;
@property (nonatomic) @? onPlayButtonClickedBlk;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)onPlayButtonClicked:;
- (id)onPlayButtonClickedBlk;
- (void)setOnPlayButtonClickedBlk:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupView;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)playButton;
- (void)setPlayButton:;
@end
