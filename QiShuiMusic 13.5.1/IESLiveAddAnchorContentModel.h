@interface IESLiveAddAnchorContentModel : IESLiveBridgeModel
@property (nonatomic) NSString couponActivityId;
@property (nonatomic) NSNumber orderId;
@property (nonatomic) NSNumber channel;
@property (nonatomic) NSString bizSource;
- (id)orderId;
- (id)bizSource;
- (id)couponActivityId;
- (void)setBizSource:;
- (void)setCouponActivityId:;
- (void)setOrderId:;
- (void)setChannel:;
- (id)channel;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
