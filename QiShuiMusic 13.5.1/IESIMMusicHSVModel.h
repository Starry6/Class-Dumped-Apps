@interface IESIMMusicHSVModel : IESIMBaseApiModel
@property (nonatomic) float h;
@property (nonatomic) float s;
@property (nonatomic) float v;
- (float)s;
- (void)setS:;
- (void)setV:;
- (float)h;
- (void)setH:;
- (float)v;
+ (id)JSONKeyPathsByPropertyKey;
@end
