@interface IESLiveSaaSCouponAuthPopupServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableCouponAuthPopup;
- (void)insertFollowOperationAfterCouponProcess:;
- (BOOL)shouldBlockByCouponPopup:;
@end
