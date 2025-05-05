@interface YYTextShadow : NSObject
@property (nonatomic) UIColor color;
@property (nonatomic) {CGSize=dd} offset;
@property (nonatomic) double radius;
@property (nonatomic) NSInteger blendMode;
@property (nonatomic) YYTextShadow subShadow;
- (id)nsShadow;
- (void)setSubShadow:;
- (id)subShadow;
- (void)setRadius:;
- (void)setOffset:;
- (void)setColor:;
- (double)radius;
- (id)initWithCoder:;
- (id)offset;
- (id)color;
- (void)encodeWithCoder:;
- (void)setBlendMode:;
- (void).cxx_destruct;
- (int)blendMode;
- (id)copyWithZone:;
+ (id)shadowWithColor:offset:radius:;
+ (id)shadowWithNSShadow:;
@end
