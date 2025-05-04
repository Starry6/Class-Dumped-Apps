@interface AWESearchAIGCCommonDetailTitleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)closeButtonClick;
- (void)createBaseUI;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setCloseButton:;
- (id)closeButton;
- (void)updateTitleView:;
@end
