@interface AWEECOMIMEditAddressHandler : NSObject
@property (nonatomic) BDXBridgeEventSubscriber editAddressSubscriber;
@property (nonatomic) NSString chooseAddressUrl;
@property (nonatomic) NSNumber shopId;
@property (nonatomic) NSString orderId;
@property (nonatomic) @? completion;
- (id)orderId;
- (void)setOrderId:;
- (id)shopId;
- (void)setShopId:;
- (void)setChooseAddressUrl:;
- (id)editAddressSubscriber;
- (void)setEditAddressSubscriber:;
- (id)chooseAddressUrl;
- (void)innerEditAddress;
- (void)checkUpdateAddressWithCompletion:;
- (void)onChooseAddress:;
- (void)run;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
@end
