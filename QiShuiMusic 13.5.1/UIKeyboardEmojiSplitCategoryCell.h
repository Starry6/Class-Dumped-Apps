@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell
@property (nonatomic) UIImageView symbol;
@property (nonatomic) UILabel title;
@property (nonatomic) UIView selectedCircle;
- (id)initWithStyle:reuseIdentifier:;
- (id)titleFont;
- (void)setTitleText:;
- (void)setSymbol:;
- (void)setTitle:;
- (id)symbol;
- (id)title;
- (void).cxx_destruct;
- (id)symbolFont;
- (void)setPressIndicatorHidden:;
- (void)setSelectedCircleBlendMode:;
- (id)selectedCircle;
- (void)setSelectedCircle:;
@end
