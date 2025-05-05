@interface IESLiveAudienceInteractiveLoadMoreCell : UITableViewCell
@property (nonatomic) UIView backView;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView downImageView;
@property (nonatomic) NSString showText;
@property (nonatomic) @? didClickLoadMore;
- (id)didClickLoadMore;
- (void)didClicked;
- (id)p_showTextSize;
- (void)p_updateText;
- (void)setDidClickLoadMore:;
- (void)setShowText:;
- (void)updateNumber:;
- (void)updateText:showDownImage:;
- (id)initWithStyle:reuseIdentifier:;
- (id)backView;
- (void)setLabel:;
- (id)label;
- (void)setBackView:;
- (void).cxx_destruct;
- (id)showText;
- (id)downImageView;
- (void)setDownImageView:;
- (void)layoutUI;
@end
