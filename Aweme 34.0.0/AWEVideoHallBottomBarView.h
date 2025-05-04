@interface AWEVideoHallBottomBarView : UIView
@property (nonatomic) UIView videoHallBottomButton;
@property (nonatomic) UILabel bottomButtonLabel;
@property (nonatomic) UIImageView bottomButtonLeftIcon;
@property (nonatomic) UIImageView bottomButtonRightIcon;
- (void)handleClickBottomButton;
- (id)videoHallBottomButton;
- (id)bottomButtonLeftIcon;
- (id)bottomButtonLabel;
- (id)bottomButtonRightIcon;
- (void)setVideoHallBottomButton:;
- (void)setBottomButtonLabel:;
- (void)setBottomButtonLeftIcon:;
- (void)setBottomButtonRightIcon:;
- (id)init;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
