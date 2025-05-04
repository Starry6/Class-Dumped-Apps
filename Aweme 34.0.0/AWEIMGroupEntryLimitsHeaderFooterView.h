@interface AWEIMGroupEntryLimitsHeaderFooterView : UITableViewHeaderFooterView
@property (nonatomic) NSString toastString;
@property (nonatomic) UIView lineView;
@property (nonatomic) BOOL useCardStyle;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton detailIconButton;
@property (nonatomic) @? showMoreDetailBlock;
- (void)__setupUI;
- (id)toastString;
- (void)setToastString:;
- (void)setUseCardStyle:;
- (BOOL)useCardStyle;
- (id)detailIconButton;
- (void)setShowMoreDetailBlock:;
- (id)showMoreDetailBlock;
- (void)__pressDetailIconBtn;
- (void)configUseHeaderTypeWithTitle:subTitle:;
- (void)configUseFooterType;
- (void)setDetailIconButton:;
- (void)prepareForReuse;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
+ (id)identifier;
@end
