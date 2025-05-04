@interface AWEPaySwiftImpl.CCMBindCardInfo : MTLModel
@property (nonatomic) NSString bindURL;
@property (nonatomic) NSString bindOrderNo;
- (id)bindURL;
- (void)setBindURL:;
- (id)bindOrderNo;
- (void)setBindOrderNo:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
