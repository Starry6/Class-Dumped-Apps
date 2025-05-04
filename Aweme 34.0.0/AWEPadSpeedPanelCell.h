@interface AWEPadSpeedPanelCell : UITableViewCell
@property (nonatomic) UILabel label;
@property (nonatomic) UIView panelBackgroundView;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) NSString text;
- (id)panelBackgroundView;
- (void)updateBackgroundViewHidden:;
- (void)updateSeparatorLineHidden:;
- (void)setPanelBackgroundView:;
- (void)setLabel:;
- (void)setText:;
- (id)text;
- (id)label;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)separatorLine;
- (void)setSeparatorLine:;
@end
