@interface IESLiveChargeFullLoadingView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> imageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) <IESLiveChargeFullLoadingViewDelegate> delegate;
- (id)closeBtn;
- (void)closeBtnClick;
- (void)setCloseBtn:;
- (void)setupUIs;
- (void)updateTips:;
- (void)dismiss;
- (id)textLabel;
- (id)containerView;
- (void)setContainerView:;
- (void)setDelegate:;
- (void)show;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)setTextLabel:;
@end
