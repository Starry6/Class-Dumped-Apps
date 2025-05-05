@interface IESLivePKSearchSuggestCell : UITableViewCell
@property (nonatomic) UILabel wordLabel;
@property (nonatomic) UIImageView tipIcon;
@property (nonatomic) UIView sepratorLine;
- (id)tipIcon;
- (void)updateWithWord:;
- (id)sepratorLine;
- (void)setSepratorLine:;
- (void)setTipIcon:;
- (void)setWordLabel:;
- (id)wordLabel;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)layoutUI;
@end
