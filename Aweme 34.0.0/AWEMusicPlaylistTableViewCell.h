@interface AWEMusicPlaylistTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageV;
@property (nonatomic) UILabel titleLB;
@property (nonatomic) UILabel countLB;
@property (nonatomic) UIImageView privateImageView;
@property (nonatomic) UIStackView horizontaLine;
@property (nonatomic) UIStackView tagStackView;
@property (nonatomic) UIButton addButton;
@property (nonatomic) UIView coverMaskView;
@property (nonatomic) UIImageView myFavoriteIcon;
@property (nonatomic) UIView songWaveContainerView;
@property (nonatomic) AWEMusicSongWaveView songWaveView;
@property (nonatomic) UIView checkBoxContainerView;
@property (nonatomic) DUXRadioBox checkBox;
@property (nonatomic) <AWEMusicPlaylistTableViewCellViewModelProtocol> cellModel;
@property (nonatomic) <AWEMusicPlaylistTableViewCellDelegate> delegate;
- (void)setCellModel:;
- (void)setCoverMaskView:;
- (id)coverMaskView;
- (id)checkBox;
- (void)setCheckBox:;
- (id)tagStackView;
- (void)setTagStackView:;
- (void)setIconImageV:;
- (id)iconImageV;
- (void)showHighlightAnimation;
- (void)displayWithModel:;
- (id)myFavoriteIcon;
- (void)setMyFavoriteIcon:;
- (id)songWaveContainerView;
- (id)songWaveView;
- (void)setSongWaveContainerView:;
- (void)setSongWaveView:;
- (id)titleLB;
- (id)horizontaLine;
- (void)setTitleLB:;
- (void)setHorizontaLine:;
- (id)privateImageView;
- (id)checkBoxContainerView;
- (id)countLB;
- (void)didTapAddButton;
- (void)p_didClickCheckBox;
- (void)setCountLB:;
- (void)setPrivateImageView:;
- (void)setCheckBoxContainerView:;
- (id)delegate;
- (void)updateConstraints;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupViews;
- (id)addButton;
- (id)cellModel;
- (void)setAddButton:;
@end
