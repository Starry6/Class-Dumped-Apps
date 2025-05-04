@interface AWESearchEffectsModel : AWEBaseApiModel
@property (nonatomic) NSArray effectsArray;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL hasMoreCards;
@property (nonatomic) NSString aladdinID;
- (id)aladdinID;
- (void)setHasMoreCards:;
- (BOOL)hasMoreCards;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)effectsArray;
- (void)setEffectsArray:;
+ (id)aladdinIDJSONTransformer;
+ (id)effectsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
