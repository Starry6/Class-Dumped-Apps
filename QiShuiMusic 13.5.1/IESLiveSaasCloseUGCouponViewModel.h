@interface IESLiveSaasCloseUGCouponViewModel : NSObject
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSPBRetainWindowResponse_CouponData couponData;
@property (nonatomic) NSString title;
@property (nonatomic) NSString contentText;
@property (nonatomic) NSString couponValidTime;
@property (nonatomic) NSURL iconUrl;
@property (nonatomic) NSString schema;
- (id)couponValidTime;
- (id)iconUrl;
- (id)couponData;
- (id)formatCouponAmountStr;
- (id)formatFloat:;
- (id)initWithCouponData:trackContext:;
- (void)setCouponData:;
- (void)setCouponValidTime:;
- (void)setIconUrl:;
- (void)setTrackContext:;
- (id)trackContext;
- (void)trackerCouponViewClick:;
- (void)trackerCouponViewShow;
- (id)schema;
- (void)setTitle:;
- (void)setSchema:;
- (id)title;
- (void).cxx_destruct;
- (id)contentText;
- (void)setContentText:;
@end
