@interface IESLiveFrequentCommentAddCell : UITableViewCell
@property (nonatomic) UIView bgView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel title;
@property (nonatomic) CAShapeLayer lineborder;
- (void)addLineBorderWithTableViewWidth:;
- (id)lineborder;
- (void)setLineborder:;
- (id)initWithStyle:reuseIdentifier:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
@end
