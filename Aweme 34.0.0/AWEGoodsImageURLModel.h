@interface AWEGoodsImageURLModel : AWEURLModel
@property (nonatomic) q width;
@property (nonatomic) q height;
- (void)setHeight:;
- (void)setWidth:;
- (long long)width;
- (long long)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
