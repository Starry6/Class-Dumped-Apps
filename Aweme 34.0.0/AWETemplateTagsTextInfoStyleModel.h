@interface AWETemplateTagsTextInfoStyleModel : AWEBaseApiModel
@property (nonatomic) NSString color;
@property (nonatomic) q size;
@property (nonatomic) BOOL bold;
@property (nonatomic) q omitStrategy;
@property (nonatomic) q maxCharacter;
- (long long)omitStrategy;
- (void)setOmitStrategy:;
- (long long)maxCharacter;
- (void)setMaxCharacter:;
- (id)color;
- (id)initWithBlock:;
- (void)setColor:;
- (long long)size;
- (void).cxx_destruct;
- (void)setSize:;
- (BOOL)bold;
- (void)setBold:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)instanceWithBlock:;
@end
