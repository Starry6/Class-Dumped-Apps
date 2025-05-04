@interface AWEEditCellHeaderView : UITableViewHeaderFooterView
@property (nonatomic) UIView lineView;
@property (nonatomic) UIView gapView;
@property (nonatomic) DUXDivider divider;
- (void)__configUI;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)gapView;
- (id)lineView;
- (void)setGapView:;
- (void)setLineView:;
- (id)divider;
- (void)setDivider:;
+ (id)identifier;
@end
