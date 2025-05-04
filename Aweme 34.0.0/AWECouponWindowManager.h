@interface AWECouponWindowManager : NSObject
@property (nonatomic) AWEPOICouponView couponView;
@property (nonatomic) UIWindow lastWindow;
@property (nonatomic) @? completion;
@property (nonatomic) AWECouponWindow couponWindow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lastWindow;
- (void)setLastWindow:;
- (id)couponWindow;
- (void)setCouponWindow:;
- (void)couponViewWillDismiss;
- (void)showWithCouponModel:awemeModel:completion:;
- (id)couponView;
- (void)setCouponView:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)makeKeyAndVisible;
+ (id)sharedManager;
@end
