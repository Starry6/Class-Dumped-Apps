@interface AWEECOMIMReserveDeliveryHandler : NSObject
@property (nonatomic) NSString shopOrderId;
@property (nonatomic) NSNumber shopId;
@property (nonatomic) NSString deliveryTime;
@property (nonatomic) @? completion;
- (id)shopId;
- (void)setShopId:;
- (void)setShopOrderId:;
- (void)setDeliveryTime:;
- (id)shopOrderId;
- (id)deliveryTime;
- (void)checkAppointmentStatusWithDataModel:;
- (void)openReserveDeliveryPageWithDataModel:;
- (void)run;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
@end
