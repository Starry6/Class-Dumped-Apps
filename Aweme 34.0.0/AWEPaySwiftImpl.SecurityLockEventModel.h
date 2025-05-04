@interface AWEPaySwiftImpl.SecurityLockEventModel : MTLModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString eventStr;
@property (nonatomic) NSString userLockTypeStr;
@property (nonatomic) NSString idNameMasked;
- (id)eventStr;
- (void)setEventStr:;
- (id)userLockTypeStr;
- (void)setUserLockTypeStr:;
- (id)idNameMasked;
- (void)setIdNameMasked:;
- (void)setUid:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)uid;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
