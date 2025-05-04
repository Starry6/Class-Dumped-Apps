@interface AWEEcomSearchPercentPageTitleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) NSString titleInfo;
@property (nonatomic) @? clickCloseBlock;
- (id)titleInfo;
- (void)setClickCloseBlock:;
- (id)clickCloseBlock;
- (void)setTitleInfo:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setCloseButton:;
- (id)closeButton;
- (void)closeButtonAction;
@end
