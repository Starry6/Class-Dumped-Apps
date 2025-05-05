@interface IESLiveProfileSkin_Skin_HonorWallUI : IESLivePBBaseMessage
@property (nonatomic) NSString titleColor;
@property (nonatomic) NSString contentColor;
@property (nonatomic) IESLiveProfileSkin_Skin_GradientColor bgColor;
@property (nonatomic) BOOL hasBgColor;
+ (id)descriptor;
@end
