@interface AWEPaySwiftImpl.FKMCodeStatusWrapModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) NSString msgHint;
@property (nonatomic) _TtC15AWEPaySwiftImpl14FKMServerExtra serverExtra;
@property (nonatomic) NSString payStatusMapString;
@property (nonatomic) NSString eventType;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)msgHint;
- (void)setMsgHint:;
- (id)serverExtra;
- (void)setServerExtra:;
- (id)payStatusMapString;
- (void)setPayStatusMapString:;
- (void)setEventType:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)eventType;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
