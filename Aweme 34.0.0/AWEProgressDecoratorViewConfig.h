@interface AWEProgressDecoratorViewConfig : NSObject
@property (nonatomic) AWEProgressUIColorConfig normalDotConfig;
@property (nonatomic) {CGSize=dd} normalDotSize;
@property (nonatomic) double normalCornerRadius;
- (id)normalDotConfig;
- (double)normalCornerRadius;
- (id)normalDotSize;
- (void)setNormalDotConfig:;
- (void)setNormalDotSize:;
- (void)setNormalCornerRadius:;
- (void).cxx_destruct;
@end
