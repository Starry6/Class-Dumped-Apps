@interface LPImagePresentationProperties : NSObject
@property (nonatomic) q filter;
@property (nonatomic) q scalingMode;
@property (nonatomic) BOOL shouldApplyBackground;
@property (nonatomic) BOOL requireFixedSize;
@property (nonatomic) UIColor maskColor;
@property (nonatomic) q verticalAlignment;
@property (nonatomic) BOOL canAdjustHorizontalPaddingForFixedSize;
@property (nonatomic) UIColor backgroundColor;
- (long long)verticalAlignment;
- (long long)filter;
- (void)setFilter:;
- (id)init;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void)setVerticalAlignment:;
- (void).cxx_destruct;
- (long long)scalingMode;
- (void)setScalingMode:;
- (void)setMaskColor:;
- (BOOL)shouldApplyBackground;
- (void)setShouldApplyBackground:;
- (BOOL)requireFixedSize;
- (void)setRequireFixedSize:;
- (id)maskColor;
- (BOOL)canAdjustHorizontalPaddingForFixedSize;
- (void)setCanAdjustHorizontalPaddingForFixedSize:;
@end
