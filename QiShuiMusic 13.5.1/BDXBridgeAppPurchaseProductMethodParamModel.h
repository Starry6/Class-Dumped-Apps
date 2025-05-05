@interface BDXBridgeAppPurchaseProductMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber checkLogin;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSNumber itemType;
@property (nonatomic) NSNumber amount;
@property (nonatomic) NSNumber quantity;
@property (nonatomic) NSString coverId;
@property (nonatomic) NSDictionary logExtra;
- (id)coverId;
- (id)checkLogin;
- (id)logExtra;
- (void)setCheckLogin:;
- (void)setCoverId:;
- (void)setLogExtra:;
- (void)setQuantity:;
- (void)setItemType:;
- (id)itemType;
- (void).cxx_destruct;
- (id)amount;
- (void)setAmount:;
- (id)quantity;
- (id)itemId;
- (void)setItemId:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
