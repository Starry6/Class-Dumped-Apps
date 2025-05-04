@interface AWEPaySwiftImpl.SecurityLockReportResponse : MTLModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString msgHint;
@property (nonatomic) _TtC15AWEPaySwiftImpl23SecurityLockServerExtra serverExtra;
- (id)msgHint;
- (void)setMsgHint:;
- (id)serverExtra;
- (void)setServerExtra:;
- (id)code;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setCode:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setMsg:;
- (id)msg;
+ (id)JSONKeyPathsByPropertyKey;
@end
