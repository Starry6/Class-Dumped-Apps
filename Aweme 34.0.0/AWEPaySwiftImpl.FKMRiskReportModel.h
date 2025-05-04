@interface AWEPaySwiftImpl.FKMRiskReportModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) NSString msgHint;
@property (nonatomic) _TtC15AWEPaySwiftImpl14FKMServerExtra serverExtra;
@property (nonatomic) NSString clientAction;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)msgHint;
- (void)setMsgHint:;
- (id)serverExtra;
- (void)setServerExtra:;
- (id)clientAction;
- (void)setClientAction:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
