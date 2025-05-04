@interface AWEVideoDescriptionPanelRetryView : UIView
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) DUXButton retryBtn;
@property (nonatomic) @? retryBtnClick;
- (double)getContentHeight;
- (id)retryBtn;
- (void)setRetryBtn:;
- (id)retryBtnClick;
- (void)setRetryBtnClick:;
- (void)retryBtnHandler;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)hintLabel;
- (void)setHintLabel:;
@end
