@interface AWEFeedSubtitleSwitchLanguageCell : UITableViewCell
@property (nonatomic) UIView container;
@property (nonatomic) UIView contentContainer;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel subContentLabel;
@property (nonatomic) DUXRadioBox radioBox;
@property (nonatomic) UIView separatorView;
@property (nonatomic) AWEFeedSubtitleSwitchLanguageCellModel model;
- (void)updateWithCellModel:;
- (void)updateCornerState:;
- (void)updateSelectedStatus:;
- (id)subContentLabel;
- (id)radioBox;
- (void)setSubContentLabel:;
- (void)setRadioBox:;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (void)setSeparatorView:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)separatorView;
- (id)contentContainer;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setContentContainer:;
+ (double)cellHeight;
@end
