@interface AWEIMInputActionBarEntryItemView : UIControl
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) MASConstraint iconSizeConstraint;
@property (nonatomic) BOOL filled;
@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) <AWEIMInputActionBarEntryItemViewDelegate> delegate;
@property (nonatomic) AWEIMInputActionBarEntryItem entryItem;
- (void)didTapEntryView;
- (id)entryItem;
- (BOOL)isLightStyle;
- (void)p_setupUI;
- (void)refreshStyle;
- (void)setEntryItem:;
- (void)setIsLightStyle:;
- (void)setTitleLabel:;
- (id)iconView;
- (void)setIconView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)titleLabel;
- (void)setFilled:;
- (BOOL)isFilled;
- (id)iconSizeConstraint;
- (void)setIconSizeConstraint:;
@end
