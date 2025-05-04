@interface AWEHSVModel : AWEBaseDataModel
@property (nonatomic) float h;
@property (nonatomic) float s;
@property (nonatomic) float v;
- (void)setS:;
- (void)setV:;
- (float)s;
- (float)h;
- (void)setH:;
- (float)v;
+ (id)JSONKeyPathsByPropertyKey;
@end
