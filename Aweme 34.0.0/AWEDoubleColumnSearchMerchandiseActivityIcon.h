@interface AWEDoubleColumnSearchMerchandiseActivityIcon : AWEBaseApiModel
@property (nonatomic) NSString icon;
@property (nonatomic) q type;
@property (nonatomic) q num;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSString darkurl;
@property (nonatomic) NSString lighturl;
@property (nonatomic) NSString text;
- (id)darkurl;
- (void)setDarkurl:;
- (id)lighturl;
- (void)setLighturl:;
- (void)setHeight:;
- (void)setWidth:;
- (id)icon;
- (void)setText:;
- (id)text;
- (long long)type;
- (long long)width;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (long long)height;
- (long long)num;
- (void)setNum:;
+ (id)JSONKeyPathsByPropertyKey;
@end
