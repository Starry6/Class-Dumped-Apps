@interface AWEECOMIMMessageTypeManager : NSObject
@property (nonatomic) <AWEECOMIMCellRegisterProtocol> shopServiceCellRegister;
@property (nonatomic) <AWEECOMIMCellRegisterProtocol> authorServiceCellRegister;
@property (nonatomic) <AWEECOMIMCellRegisterProtocol> instantRetailServiceCellRegister;
@property (nonatomic) NSMutableDictionary cellRegisterMap;
@property (nonatomic) NSLock cellRegisterLock;
- (id)cellRegisterWithPigeonBizType:;
- (void)setCellRegisterLock:;
- (void)setCellRegisterMap:;
- (id)cellRegisterMap;
- (id)cellRegisterLock;
- (id)shopServiceCellRegister;
- (void)setShopServiceCellRegister:;
- (void)setAuthorServiceCellRegister:;
- (id)authorServiceCellRegister;
- (void)setInstantRetailServiceCellRegister:;
- (id)instantRetailServiceCellRegister;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
