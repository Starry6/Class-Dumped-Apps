@interface AWEPadGameLiveCardCell : UICollectionViewCell
@property (nonatomic) UIView<AWEFeedLiveMarkViewProtocol> liveMarkView;
@property (nonatomic) UIView tagLabelBackView;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel descLabel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setLiveMarkView:;
- (id)liveMarkView;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setTagLabelBackView:;
- (id)tagLabelBackView;
- (id)gradientView;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setupView;
@end
