@interface IESECGoodsDetailCustomButtonModel : IESECGoodsDetailButtonModel
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString backgroundUrl;
@property (nonatomic) NSString textColor;
@property (nonatomic) Q customType;
@property (nonatomic) q style;
- (id)iconUrl;
- (id)backgroundUrl;
- (void)setBackgroundUrl:;
- (void)setIconUrl:;
- (void)setStyle:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (long long)style;
- (unsigned long long)customType;
- (void)setCustomType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
