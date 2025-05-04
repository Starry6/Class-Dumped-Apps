@interface AWECardCouponValidateConfirmViewController : UIViewController
@property (nonatomic) AWECouponValidateDetail couponDetail;
@property (nonatomic) NSString actionType;
- (void)cancelDidTap;
- (void)confirmDidTap;
- (id)couponDetail;
- (void)setCouponDetail:;
- (id)actionType;
- (void)setActionType:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setupUI;
@end
