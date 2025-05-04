@interface AWERelateRecommendNewBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) BOOL hasShowed;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:;
- (BOOL)hasShowed;
- (void)setHasShowed:;
- (BOOL)shouldAppearWithData:;
- (void)confirmAction:;
- (void)setCancelButton:;
- (void)viewDidLoad;
- (id)cancelButton;
- (void).cxx_destruct;
- (id)confirmButton;
- (id)contentLabel;
- (void)setConfirmButton:;
- (void)setContentLabel:;
- (void)cancelAction:;
@end
