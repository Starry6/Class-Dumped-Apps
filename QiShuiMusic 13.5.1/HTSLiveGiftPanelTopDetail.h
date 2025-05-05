@interface HTSLiveGiftPanelTopDetail : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSMutableArray mainTextArray;
@property (nonatomic) Q mainTextArray_Count;
@property (nonatomic) NSMutableArray deputyTextArray;
@property (nonatomic) Q deputyTextArray_Count;
@property (nonatomic) HTSLiveProgressBar progressBar;
@property (nonatomic) BOOL hasProgressBar;
@property (nonatomic) HTSLiveTouchButton button;
@property (nonatomic) BOOL hasButton;
@property (nonatomic) HTSLiveImage bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (nonatomic) NSString mainTextBgAttr;
+ (id)descriptor;
@end
