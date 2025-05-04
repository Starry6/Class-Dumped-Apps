@interface AWEMixTabCardModel : AWEBaseApiModel
@property (nonatomic) AWEMixVideoModel mixInfo;
@property (nonatomic) NSArray list;
- (id)mixInfo;
- (void)setMixInfo:;
- (void)setList:;
- (id)list;
- (void).cxx_destruct;
+ (id)isEqualBlock;
+ (id)mixInfoJSONTransformer;
+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
