@interface HTSLiveProfileSkinConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage overallBgImg;
@property (nonatomic) BOOL hasOverallBgImg;
@property (nonatomic) HTSLiveImage panelOpenEffect;
@property (nonatomic) BOOL hasPanelOpenEffect;
@property (nonatomic) HTSLiveImage panelLoopEffect;
@property (nonatomic) BOOL hasPanelLoopEffect;
@property (nonatomic) q parallaxAssetId;
@property (nonatomic) HTSLiveFlexImageStruct borderPoint9;
@property (nonatomic) BOOL hasBorderPoint9;
@property (nonatomic) q profileDisplayAssetId;
@property (nonatomic) HTSLiveImage borderPng;
@property (nonatomic) BOOL hasBorderPng;
@property (nonatomic) HTSLiveImage rightPng;
@property (nonatomic) BOOL hasRightPng;
@property (nonatomic) HTSLiveFlexImageStruct mainButtonPng;
@property (nonatomic) BOOL hasMainButtonPng;
@property (nonatomic) HTSLiveImage mainButtonWebp;
@property (nonatomic) BOOL hasMainButtonWebp;
+ (id)descriptor;
@end
