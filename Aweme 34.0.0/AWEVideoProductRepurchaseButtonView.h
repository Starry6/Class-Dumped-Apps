@interface AWEVideoProductRepurchaseButtonView : UIView
@property (nonatomic) UIButton buyOthersButton;
@property (nonatomic) AWEPaymentRepurchaseView repurchaseView;
@property (nonatomic) BOOL canAfford;
@property (nonatomic) <AWEVideoProductRepurchaseButtonViewDelegate> delegate;
- (void)didClickBuyButton;
- (void)repurchaseOrderBuy;
- (void)didClickRepurchaseButton:;
- (id)repurchaseView;
- (void)repurchaseButtonClick;
- (void)setRepurchaseView:;
- (void)updateRepurchaseButtonStatus;
- (void)updateRepurchaseButtonText:;
- (void)updateAffordState:;
- (id)buyOthersButton;
- (void)setCanAfford:;
- (BOOL)canAfford;
- (void)setBuyOthersButton:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setUpSubviews;
@end
