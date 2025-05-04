@interface AWEDeliveryMessageTypeManager : NSObject
@property (nonatomic) <AWEDeliveryCellRegisterProtocol> deliveryServiceCellRegister;
@property (nonatomic) NSMutableDictionary cellRegisterMap;
@property (nonatomic) NSLock cellRegisterLock;
- (id)cellRegisterWithPigeonBizType:;
- (void)setCellRegisterLock:;
- (void)setCellRegisterMap:;
- (void)setDeliveryServiceCellRegister:;
- (id)cellRegisterMap;
- (id)deliveryServiceCellRegister;
- (id)cellRegisterLock;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
