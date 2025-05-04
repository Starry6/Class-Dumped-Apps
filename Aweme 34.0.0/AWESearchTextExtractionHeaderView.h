@interface AWESearchTextExtractionHeaderView : UIView
@property (nonatomic) UIView backView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)init;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (void)closeAction;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
