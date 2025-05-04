@interface AWERelatedVideoTagModel : MTLModel
@property (nonatomic) AWERelatedVideoTagItem level1;
@property (nonatomic) AWERelatedVideoTagItem level2;
@property (nonatomic) AWERelatedVideoTagItem level3;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)level1;
- (void)setLevel1:;
- (id)level2;
- (void)setLevel2:;
- (id)level3;
- (void)setLevel3:;
- (void).cxx_destruct;
+ (id)level1JSONTransformer;
+ (id)level2JSONTransformer;
+ (id)level3JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
