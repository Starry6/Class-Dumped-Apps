@interface AWETemplateTagsImageStyleModel : AWEBaseApiModel
@property (nonatomic) NSString color;
@property (nonatomic) q shape;
@property (nonatomic) q size;
- (id)color;
- (id)initWithBlock:;
- (void)setColor:;
- (void)setShape:;
- (long long)shape;
- (long long)size;
- (void).cxx_destruct;
- (void)setSize:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)instanceWithBlock:;
@end
