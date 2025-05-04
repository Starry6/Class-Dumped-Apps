@interface AWEGoodsVisitorModel : MTLModel
@property (nonatomic) NSArray visitorAvatars;
@property (nonatomic) Q count;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)visitorAvatars;
- (void)setVisitorAvatars:;
- (void)setCount:;
- (unsigned long long)count;
- (void).cxx_destruct;
+ (id)visitorAvatarsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
