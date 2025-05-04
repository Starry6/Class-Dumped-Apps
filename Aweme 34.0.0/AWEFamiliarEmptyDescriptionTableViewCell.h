@interface AWEFamiliarEmptyDescriptionTableViewCell : UITableViewCell
@property (nonatomic) UILabel emptyViewTitleLabel;
@property (nonatomic) UILabel emptyViewDescLabel;
@property (nonatomic) BOOL isConstColor;
@property (nonatomic) UIView lineView;
- (void)setEmptyViewTitleLabel:;
- (void)setEmptyViewDescLabel:;
- (id)emptyViewTitleLabel;
- (id)emptyViewDescLabel;
- (void)setIsConstColor:;
- (id)initWithStyle:reuseIdentifier:isConstColor:;
- (BOOL)isConstColor;
- (id)p_emptyDesc;
- (void)updateDescriptionText:descLabel:;
- (void)hideDescriptionCellLineView;
- (void)hideTitleAndDescLabel;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)lineView;
- (void)resetLayout;
- (void)setLineView:;
- (void)setupUI;
+ (double)suggestHeight;
+ (double)heightForContent;
@end
