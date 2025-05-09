@interface AWETeenPlayInteractionRecorderEnterBar : AWETeenPlayInteractionBaseElement
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton enterButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)enterButton;
- (void)setEnterButton:;
- (void)hideAllRecorderEnterBar;
- (void)p_guardGesture;
- (void)p_onEnterButtonClick;
- (void)p_onCloseButtonClick;
- (void)p_entranceClickTrack;
- (void)dealloc;
- (void)viewDidLoad;
- (id)containerView;
- (id)iconView;
- (void)setContainerView:;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void)setData:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setCloseButton:;
- (id)closeButton;
@end
