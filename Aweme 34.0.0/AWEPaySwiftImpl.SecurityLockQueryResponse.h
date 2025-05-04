@interface AWEPaySwiftImpl.SecurityLockQueryResponse : MTLModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString msgHint;
@property (nonatomic) _TtC15AWEPaySwiftImpl23SecurityLockServerExtra serverExtra;
@property (nonatomic) NSString userLockStatusString;
@property (nonatomic) NSString idNameMasked;
- (id)msgHint;
- (void)setMsgHint:;
- (id)serverExtra;
- (void)setServerExtra:;
- (id)userLockStatusString;
- (void)setUserLockStatusString:;
- (id)idNameMasked;
- (void)setIdNameMasked:;
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
