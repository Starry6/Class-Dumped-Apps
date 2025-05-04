@interface AWEIMTaskCardStyleActivityModel_CardButtonBody : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) Q color;
@property (nonatomic) NSString schema;
- (id)schema;
- (void)setSchema:;
- (void)setText:;
- (unsigned long long)color;
- (id)text;
- (void)setColor:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;
@end
