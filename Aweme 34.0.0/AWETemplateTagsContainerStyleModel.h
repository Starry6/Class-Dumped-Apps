@interface AWETemplateTagsContainerStyleModel : AWEBaseApiModel
@property (nonatomic) NSString color;
@property (nonatomic) q transparency;
@property (nonatomic) q borderRadius;
@property (nonatomic) NSArray padding;
@property (nonatomic) q height;
- (id)padding;
- (void)setHeight:;
- (id)color;
- (id)initWithBlock:;
- (void)setColor:;
- (void)setPadding:;
- (void).cxx_destruct;
- (long long)height;
- (long long)borderRadius;
- (void)setTransparency:;
- (long long)transparency;
- (void)setBorderRadius:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)instanceWithBlock:;
@end
