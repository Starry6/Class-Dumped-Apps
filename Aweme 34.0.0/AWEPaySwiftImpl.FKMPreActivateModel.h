@interface AWEPaySwiftImpl.FKMPreActivateModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) NSString msgHint;
@property (nonatomic) _TtC15AWEPaySwiftImpl14FKMServerExtra serverExtra;
@property (nonatomic) NSString validStatusRaw;
@property (nonatomic) NSString retainToken;
@property (nonatomic) _TtC15AWEPaySwiftImpl31FKMActivateRetainPopupInfoModel retainPopupInfo;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)msgHint;
- (void)setMsgHint:;
- (id)serverExtra;
- (void)setServerExtra:;
- (id)validStatusRaw;
- (void)setValidStatusRaw:;
- (id)retainToken;
- (void)setRetainToken:;
- (id)retainPopupInfo;
- (void)setRetainPopupInfo:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
