@interface PKToolConfiguration : NSObject
@property (nonatomic) BOOL shouldShowOpacityInColorPicker;
@property (nonatomic) q inkVersion;
@property (nonatomic) NSString localizedName;
@property (nonatomic) UIImage baseImage;
@property (nonatomic) UIImage image;
@property (nonatomic) UIBezierPath shadowPath;
@property (nonatomic) BOOL supportsColor;
@property (nonatomic) UIColor defaultColor;
@property (nonatomic) BOOL supportsOpacity;
@property (nonatomic) BOOL isEraserTool;
@property (nonatomic) double opacityLabelVerticalOffset;
@property (nonatomic) UIImage bandMaskImage;
@property (nonatomic) UIImage bandContourImage;
@property (nonatomic) double bandVerticalOffset;
@property (nonatomic) UIImage tipMaskImage;
@property (nonatomic) UIImage tipContourImage;
@property (nonatomic) UIBezierPath shadowPathIncludingTip;
@property (nonatomic) BOOL supportsStrokeWeight;
@property (nonatomic) NSDictionary strokeWeightsToButtonImages;
@property (nonatomic) double minimumBandThickness;
@property (nonatomic) double maximumBandThickness;
@property (nonatomic) {CGSize=dd} strokeWeightButtonSize;
@property (nonatomic) UIColor weightButtonTintColorOverride;
@property (nonatomic) @? viewControllerProvider;
- (void)setShadowPath:;
- (void)setLocalizedName:;
- (id)shadowPath;
- (id)init;
- (id)localizedName;
- (void)setImage:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)image;
- (id)copyWithZone:;
- (void)setBaseImage:;
- (id)defaultColor;
- (id)baseImage;
- (BOOL)supportsStrokeWeight;
- (BOOL)supportsColor;
- (id)initWithLocalizedName:baseImage:shadowPath:;
- (BOOL)shouldShowOpacityInColorPicker;
- (void)setSupportsColor:andOpacity:defaultColor:;
- (void)setSupportsColor:andOpacity:;
- (void)clearTipMaskImageAndShadowPathIncludingTip;
- (void)setTipMaskImage:withShadowPathIncludingTip:;
- (void)setStrokeWeightsToButtonImages:;
- (void)setMinimumBandThickness:andMaximumBandThickness:;
- (double)bandThicknessForStrokeWeight:;
- (id)p_strokeWeightRange;
- (id)strokeWeightButtonSize;
- (BOOL)supportsOpacity;
- (double)opacityLabelVerticalOffset;
- (void)setOpacityLabelVerticalOffset:;
- (id)bandMaskImage;
- (void)setBandMaskImage:;
- (id)bandContourImage;
- (void)setBandContourImage:;
- (double)bandVerticalOffset;
- (void)setBandVerticalOffset:;
- (id)tipMaskImage;
- (id)tipContourImage;
- (void)setTipContourImage:;
- (id)shadowPathIncludingTip;
- (id)strokeWeightsToButtonImages;
- (double)minimumBandThickness;
- (double)maximumBandThickness;
- (BOOL)isEraserTool;
- (id)weightButtonTintColorOverride;
- (id)viewControllerProvider;
- (void)setViewControllerProvider:;
- (long long)inkVersion;
+ (id)_configurationForMonoline;
+ (id)_configurationForFountainPen;
+ (id)_configurationForWatercolor;
+ (id)defaultConfigurationForToolWithIdentifier:;
+ (id)defaultConfigurationForToolWithIdentifier:inkVersion:;
+ (id)defaultColorForInkingToolWithIdentifier:;
+ (id)_deepCopyStrokeWeightDictionary:;
+ (id)p_assetImageForToolIdentifier:weight:bundle:;
+ (id)p_objectEraserImageWithWeight:imageSize:;
+ (id)p_bitmapEraserImageWithWeight:imageSize:;
@end
