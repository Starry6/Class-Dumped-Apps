@interface IESECWinLiveProductOrderIconView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel orderLabel;
- (id)orderLabel;
- (void)setOrderLabel:;
- (void)updateIconViewWithRank:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setUpConstraints;
@end
