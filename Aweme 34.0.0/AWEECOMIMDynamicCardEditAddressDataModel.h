@interface AWEECOMIMDynamicCardEditAddressDataModel : NSObject
@property (nonatomic) NSString chooseAddressUrl;
@property (nonatomic) NSString shopId;
@property (nonatomic) NSString orderId;
@property (nonatomic) @? completion;
@property (nonatomic) BDXBridgeEventSubscriber editAddressSubscriber;
- (id)orderId;
- (void)setOrderId:;
- (id)shopId;
- (void)setShopId:;
- (void)setChooseAddressUrl:;
- (id)editAddressSubscriber;
- (void)setEditAddressSubscriber:;
- (id)chooseAddressUrl;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
@end
