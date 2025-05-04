@interface AWEUGPendantCloseButton : UIView
@property (nonatomic) Q state;
@property (nonatomic) UIButton dismissButton;
@property (nonatomic) @? tapHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)performUpdateFromState:toState:animated:;
- (void)buttonTapped:;
- (void)show;
- (void)hide;
- (id)initWithFrame:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)setState:;
- (id)dismissButton;
- (void)setDismissButton:;
- (void)setTapHandler:;
- (id)tapHandler;
- (void)updateWithModel:;
- (void)setupButtonView;
@end
