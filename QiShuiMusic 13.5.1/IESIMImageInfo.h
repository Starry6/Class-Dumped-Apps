@interface IESIMImageInfo : IESIMBaseApiModel
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) IESIMURLModel large;
@property (nonatomic) IESIMURLModel thumb;
- (void)setLarge:;
- (void)setWidth:;
- (long long)height;
- (long long)width;
- (id)thumb;
- (id)large;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setThumb:;
+ (id)largeJSONTransformer;
+ (id)thumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
