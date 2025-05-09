@interface IESLiveWalletRedeemPopupAlert : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton remindButton;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? remindUpdateStorage;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSNumber diamond;
@property (nonatomic) NSNumber gold;
@property (nonatomic) BOOL notRemindIsSelect;
- (id)diamond;
- (id)descLabel;
- (id)gold;
- (id)initWithPrice:diamond:rebateGold:;
- (BOOL)notRemindIsSelect;
- (void)p_configData;
- (id)p_descText;
- (void)p_remindButtonDidClick:;
- (void)p_tapAction;
- (void)p_tapCancel;
- (id)p_titleText;
- (id)remindButton;
- (id)remindUpdateStorage;
- (void)setDescLabel:;
- (void)setDiamond:;
- (void)setGold:;
- (void)setNotRemindIsSelect:;
- (void)setRemindButton:;
- (void)setRemindUpdateStorage:;
- (void)setCancelBlock:;
- (void)setTitleLabel:;
- (id)containerView;
- (id)actionBlock;
- (void)setContainerView:;
- (id)cancelBlock;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (id)price;
- (id)titleLabel;
- (id)cancelButton;
- (void)setPrice:;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
- (void)setActionBlock:;
@end
