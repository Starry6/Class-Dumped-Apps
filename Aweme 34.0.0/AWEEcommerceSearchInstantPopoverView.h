@interface AWEEcommerceSearchInstantPopoverView : UIView
@property (nonatomic) UILabel locationLabel;
@property (nonatomic) UILabel lastCharLabel;
@property (nonatomic) UIButton switchBtn;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) NSString addressStr;
@property (nonatomic) <AWEEcommerceSearchSwitchAddressDelegate> delegate;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)switchBtn;
- (void)setSwitchBtn:;
- (void)setAddressStr:;
- (id)lastCharLabel;
- (id)addressStr;
- (void)switchAddressButtonTap;
- (void)closeButtonTap;
- (double)getLocationWidth;
- (void)setLastCharLabel:;
- (id)delegate;
- (id)initWithAddress:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupViews;
- (id)locationLabel;
- (void)setLocationLabel:;
@end
