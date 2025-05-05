@interface CJPayBytePayHomeContentView : CJPayHomeBaseContentView
@property (nonatomic) CJPayBytePayMethodView payMethodTableView;
@property (nonatomic) CJPayMarketingMsgView marketingMsgView;
@property (nonatomic) UILabel orderDetailLabel;
@property (nonatomic) BOOL showAmountWithVoucher;
@property (nonatomic) MASConstraint amountViewTopConstraint;
@property (nonatomic) MASConstraint orderDetailLabelTopConstraint;
- (id)amountViewTopConstraint;
- (id)marketingMsgView;
- (id)orderDetailLabel;
- (id)orderDetailLabelTopConstraint;
- (void)p_updateHomeContentViewWithAmountVoucher:;
- (id)payMethodTableView;
- (void)refreshDataWithModels:;
- (void)refreshPriceViewWithAmount:voucher:;
- (void)setAmountViewTopConstraint:;
- (void)setMarketingMsgView:;
- (void)setOrderDetailLabel:;
- (void)setOrderDetailLabelTopConstraint:;
- (void)setPayMethodTableView:;
- (void)setShowAmountWithVoucher:;
- (void)setTableViewDelegate:;
- (BOOL)showAmountWithVoucher;
- (void)stopLoading;
- (void)startLoading;
- (void).cxx_destruct;
- (void)setupUI;
@end
