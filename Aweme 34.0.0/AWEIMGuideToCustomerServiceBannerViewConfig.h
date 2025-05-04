@interface AWEIMGuideToCustomerServiceBannerViewConfig : NSObject
@property (nonatomic) NSURL iconUrlLight;
@property (nonatomic) NSURL iconUrlDark;
@property (nonatomic) NSString text;
@property (nonatomic) NSString buttonText;
@property (nonatomic) BOOL hasCloseButton;
@property (nonatomic) @? closeBtnTapped;
@property (nonatomic) @? actionBtnTapped;
- (void)setCloseBtnTapped:;
- (id)iconUrlLight;
- (void)setIconUrlLight:;
- (id)iconUrlDark;
- (void)setIconUrlDark:;
- (id)closeBtnTapped;
- (id)actionBtnTapped;
- (void)setActionBtnTapped:;
- (void)setText:;
- (id)text;
- (void)setHasCloseButton:;
- (BOOL)hasCloseButton;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
@end
