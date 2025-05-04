@interface AWESearchColorConfigModel : AWEBaseApiModel
@property (nonatomic) UIColor bgColor;
@property (nonatomic) UIColor centerColor;
@property (nonatomic) double screenCount;
- (id)centerColor;
- (void)setScreenCount:;
- (double)screenCount;
- (void).cxx_destruct;
- (id)bgColor;
- (void)setBgColor:;
- (void)setCenterColor:;
+ (id)centerColorJSONTransformer;
+ (id)bgColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
