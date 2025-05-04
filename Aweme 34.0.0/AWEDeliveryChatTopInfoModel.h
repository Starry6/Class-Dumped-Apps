@interface AWEDeliveryChatTopInfoModel : MTLModel
@property (nonatomic) AWEDeliveryChatDeliveryInfoModel deliveryInfo;
@property (nonatomic) AWEDeliveryChatRiderPhoneInfoModel riderPhoneInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deliveryInfo;
- (id)riderPhoneInfo;
- (void)setDeliveryInfo:;
- (void)setRiderPhoneInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
