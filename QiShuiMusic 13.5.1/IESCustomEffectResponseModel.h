@interface IESCustomEffectResponseModel : MTLModel
@property (nonatomic) NSArray customEffects;
@property (nonatomic) NSArray templateEffects;
@property (nonatomic) NSArray urlPrefixs;
@property (nonatomic) NSArray customURLPrefixs;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) q sortingPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)sortingPosition;
- (id)templateEffects;
- (id)customEffects;
- (id)customURLPrefixs;
- (void)setCustomEffects:;
- (void)setCustomURLPrefixs:;
- (void)setTemplateEffects:;
- (void)setUrlPrefixs:;
- (void)updateFileURLForEffects;
- (id)urlPrefixs;
- (long long)cursor;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
