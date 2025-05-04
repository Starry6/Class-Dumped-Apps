@interface AWEDislikeEntity : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString serverExtra;
- (id)serverExtra;
- (void)setServerExtra:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
