@interface BDXBridgeAppPurchaseProductMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber code;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString itemId;
@property (nonatomic) q status;
@property (nonatomic) q channel;
- (void)setStatus:;
- (void)setChannel:;
- (long long)channel;
- (id)code;
- (void).cxx_destruct;
- (long long)status;
- (void)setCode:;
- (id)itemId;
- (void)setItemId:;
- (id)msg;
- (void)setMsg:;
+ (id)JSONKeyPathsByPropertyKey;
@end
