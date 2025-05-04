@interface AWEImageInfo : AWEBaseApiModel
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) AWEURLModel large;
@property (nonatomic) AWEURLModel thumb;
- (void)setHeight:;
- (void)setThumb:;
- (void)setWidth:;
- (id)large;
- (long long)width;
- (void).cxx_destruct;
- (long long)height;
- (id)thumb;
- (void)setLarge:;
+ (id)largeJSONTransformer;
+ (id)thumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
