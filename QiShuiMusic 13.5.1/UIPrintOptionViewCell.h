@interface UIPrintOptionViewCell : UIPrintOptionCell
@property (nonatomic) <UIPrintOptionViewDelegate> optionViewDelegate;
@property (nonatomic) UIView printOptionView;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)printOptionCellTapped;
- (id)optionViewDelegate;
- (void)setOptionViewDelegate:;
- (id)printOptionView;
- (void)setPrintOptionView:;
@end
