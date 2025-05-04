@interface AWERelatedRecommendGradientConfig : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) NSArray gradientColors;
@property (nonatomic) double topPadding;
- (id)initWithEnable:gradientColors:topPadding:;
- (BOOL)enable;
- (id)init;
- (double)topPadding;
- (id)gradientColors;
- (void).cxx_destruct;
- (void)setEnable:;
- (void)setGradientColors:;
- (void)setTopPadding:;
@end
