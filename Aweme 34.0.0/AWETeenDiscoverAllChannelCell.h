@interface AWETeenDiscoverAllChannelCell : UICollectionViewCell
@property (nonatomic) UIView backView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) AWETeenDiscoverChannelModel channelModel;
- (void)p_setupUI;
- (void)setChannelModel:;
- (id)channelModel;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (void)setTitleLabel:;
- (id)iconImageView;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (id)titleLabel;
- (void)setIconImageView:;
@end
