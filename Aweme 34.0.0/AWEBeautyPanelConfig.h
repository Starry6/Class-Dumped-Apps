@interface AWEBeautyPanelConfig : NSObject
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) BOOL enableBlurViewOpt;
@property (nonatomic) double topCornerRadius;
- (void)setTopCornerRadius:;
- (BOOL)enableBlurViewOpt;
- (void)setEnableBlurViewOpt:;
- (id)init;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (double)topCornerRadius;
@end
