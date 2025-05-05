@interface IESLiveProfileSkin_Skin_BgUI : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage overallImage;
@property (nonatomic) BOOL hasOverallImage;
@property (nonatomic) HTSLiveFlexImageStruct topBorder;
@property (nonatomic) BOOL hasTopBorder;
@property (nonatomic) HTSLiveImage rightImage;
@property (nonatomic) BOOL hasRightImage;
@property (nonatomic) IESLiveProfileSkin_Skin_GradientColor color;
@property (nonatomic) BOOL hasColor;
@property (nonatomic) NSString splitLineColor;
@property (nonatomic) IESLiveProfileSkin_Skin_ExtendTopBorder extendTopBorder;
@property (nonatomic) BOOL hasExtendTopBorder;
+ (id)descriptor;
@end
