@interface IESLiveSaaSPBPlayerProgressBarSkin : GPBMessage
@property (nonatomic) NSString barColor;
@property (nonatomic) IESLiveSaaSPBImage sliderStaticIcon;
@property (nonatomic) BOOL hasSliderStaticIcon;
@property (nonatomic) IESLiveSaaSPBImage sliderDynamicIcon;
@property (nonatomic) BOOL hasSliderDynamicIcon;
+ (id)descriptor;
@end
