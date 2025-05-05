@interface CJPayBytePayMethodSecondaryCell : CJPayMethodSecondaryCellView
@property (nonatomic) UIImageView iconImgView;
@property (nonatomic) CJPaySubPayTypeIconTipModel iconTip;
@property (nonatomic) UILabel rightMsgLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIconImgView:;
- (id)iconTip;
- (id)iconImgView;
- (void)p_refreshDiscountView:;
- (void)p_refreshVoucherLabel:;
- (void)p_tapIncomePayAboutImageView;
- (id)rightMsgLabel;
- (void)setIconTip:;
- (void)setRightMsgLabel:;
- (void)stopLoading;
- (void)startLoading;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateContent:;
+ (id)calHeight:;
+ (BOOL)p_isDiscountLineBreakWithBizModel:;
+ (BOOL)p_isDisplayDiscountLabel:;
@end
