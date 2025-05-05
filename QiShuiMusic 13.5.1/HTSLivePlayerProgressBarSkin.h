@interface HTSLivePlayerProgressBarSkin : IESLivePBBaseMessage
@property (nonatomic) NSString barColor;
@property (nonatomic) HTSLiveImage sliderStaticIcon;
@property (nonatomic) BOOL hasSliderStaticIcon;
@property (nonatomic) HTSLiveImage sliderDynamicIcon;
@property (nonatomic) BOOL hasSliderDynamicIcon;
+ (id)descriptor;
@end
