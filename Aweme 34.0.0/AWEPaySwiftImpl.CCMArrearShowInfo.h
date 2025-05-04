@interface AWEPaySwiftImpl.CCMArrearShowInfo : MTLModel
@property (nonatomic) q amount;
@property (nonatomic) q orderNum;
@property (nonatomic) NSString guideText;
@property (nonatomic) NSString jumpUrl;
- (id)jumpUrl;
- (id)guideText;
- (void)setGuideText:;
- (void)setJumpUrl:;
- (long long)orderNum;
- (void)setOrderNum:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)amount;
- (void)setAmount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
