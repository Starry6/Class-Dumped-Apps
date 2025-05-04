@interface AWERecycledWorksHeaderView : UIView
@property (nonatomic) AWERecycledWorksViewController vc;
@property (nonatomic) DUXBaseLabel tipsLabel;
@property (nonatomic) UIButton closeTipsButton;
@property (nonatomic) <AWERecycledWorksHeaderViewDelegate> delegate;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (id)initWithVC:;
- (id)closeTipsButton;
- (void)closeTipsButtonAction:;
- (void)setCloseTipsButton:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (id)vc;
- (void)setVc:;
- (id)tipContent;
@end
