@interface AWEAdWebViewGuideView : UIView
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) AWEButton openButton;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <AWEAdWebViewGuideDelegate> delegate;
- (id)tipsLabel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setTipsLabel:;
- (void)closeBtnClicked:;
- (void)openBtnClicked:;
- (void)setModel:;
- (id)init;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)openButton;
- (void)setOpenButton:;
- (void)_setupUI;
@end
