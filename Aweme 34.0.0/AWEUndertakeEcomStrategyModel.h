@interface AWEUndertakeEcomStrategyModel : MTLModel
@property (nonatomic) q code;
@property (nonatomic) NSString msg;
@property (nonatomic) AWEUndertakeEcomPeekContentModel peekContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)peekContent;
- (void)setPeekContent:;
- (long long)code;
- (void)setCode:;
- (void).cxx_destruct;
- (void)setMsg:;
- (id)msg;
+ (id)peekContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
