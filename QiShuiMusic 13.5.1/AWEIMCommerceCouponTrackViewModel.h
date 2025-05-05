@interface AWEIMCommerceCouponTrackViewModel : NSObject
@property (nonatomic) AWEIMCommerceCouponViewModel couponViewModel;
- (void)trackWithEvent:;
- (id)couponViewModel;
- (void)setCouponViewModel:;
- (void)trackApply;
- (void)trackToUse;
- (void)trackViewDisplay;
- (void).cxx_destruct;
@end
