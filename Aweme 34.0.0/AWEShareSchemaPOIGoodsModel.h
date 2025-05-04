@interface AWEShareSchemaPOIGoodsModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString goodsName;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setGoodsName:;
- (id)goodsName;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
