@interface IESECWinNavSearchBar : UIView
@property (nonatomic) UILabel placeholderLabel;
@property (nonatomic) @? searchClickBlock;
@property (nonatomic) NSString placeholder;
- (id)searchClickBlock;
- (void)setSearchClickBlock:;
- (id)placeholder;
- (void)setPlaceholder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)touchesEnded:withEvent:;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:;
@end
