@interface AWEMusicHSVModel : AWEBaseApiModel
@property (nonatomic) float h;
@property (nonatomic) float s;
@property (nonatomic) float v;
- (void)setS:;
- (void)setV:;
- (float)s;
- (double)awe_normalizeH;
- (double)awe_normalizeS;
- (BOOL)awe_isNeedNormalize;
- (double)awe_normalizeV;
- (float)h;
- (void)setH:;
- (float)v;
+ (id)JSONKeyPathsByPropertyKey;
@end
