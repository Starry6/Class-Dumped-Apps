@interface IESLiveAnchorMultiLinkParticipationBarCell : UITableViewCell
@property (nonatomic) IESLiveAnchorMultiLinkParticipationCellItem item;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)setupItem:;
- (id)initWithStyle:reuseIdentifier:;
- (id)item;
- (void)setItem:;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
