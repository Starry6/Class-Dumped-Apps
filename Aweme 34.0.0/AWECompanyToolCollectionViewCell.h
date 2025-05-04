@interface AWECompanyToolCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView tagIconView;
@property (nonatomic) <AWEEnterpriseToolsBubbleModelProtocol> bubbleModel;
@property (nonatomic) BOOL isSearchMoreBubble;
- (id)bubbleModel;
- (void)setBubbleModel:;
- (void)setIsSearchMoreBubble:;
- (id)tagIconView;
- (void)p_updateTitleConstraints;
- (BOOL)isSearchMoreBubble;
- (void)setTagIconView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setIconImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
