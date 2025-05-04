@interface AWEIMBaseListHeaderCell : UITableViewCell
@property (nonatomic) UIImageView functionIconView;
@property (nonatomic) UILabel functionNameLabel;
@property (nonatomic) UIImageView functionImageView;
@property (nonatomic) BOOL backgroundColorIsClear;
- (void)configWithModel:;
- (id)functionIconView;
- (id)functionNameLabel;
- (id)functionImageView;
- (BOOL)backgroundColorIsClear;
- (void)__updateLayoutWithIconShow:;
- (void)setBackgroundColorIsClear:;
- (void)setFunctionIconView:;
- (void)setFunctionNameLabel:;
- (void)setFunctionImageView:;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
+ (id)identifier;
@end
