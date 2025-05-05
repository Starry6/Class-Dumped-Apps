@interface AWEIMMessageBaseHeaderView : UITableViewHeaderFooterView
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) AWEIMMessageViewModel animatingCellVM;
- (id)animatingCellVM;
- (void)configWithText:;
- (void)configTimeLabel:;
- (void)setAnimatingCellVM:;
- (void)setTimeLabel:;
- (id)initWithReuseIdentifier:;
- (id)timeLabel;
- (void)layoutSubviews;
- (void).cxx_destruct;
+ (double)timeLabelMarginTop;
+ (id)identifier;
@end
