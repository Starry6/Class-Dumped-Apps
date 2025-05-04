@interface AWEECommerceEcomButtonAreaModel : AWEBaseApiModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel iconImg;
@property (nonatomic) NSString coverImg;
@property (nonatomic) q paddingLeft;
@property (nonatomic) q paddingRight;
@property (nonatomic) NSString position;
- (id)iconImg;
- (void)setIconImg:;
- (id)coverImg;
- (void)setCoverImg:;
- (void)setKey:;
- (long long)paddingLeft;
- (void)setText:;
- (void)setPaddingRight:;
- (id)position;
- (id)key;
- (id)text;
- (void).cxx_destruct;
- (long long)paddingRight;
- (void)setPaddingLeft:;
- (void)setPosition:;
+ (id)JSONKeyPathsByPropertyKey;
@end
