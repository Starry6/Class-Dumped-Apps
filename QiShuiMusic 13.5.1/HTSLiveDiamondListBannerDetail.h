@interface HTSLiveDiamondListBannerDetail : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray mainTextArray;
@property (nonatomic) Q mainTextArray_Count;
@property (nonatomic) HTSLiveTouchButton mainTextButton;
@property (nonatomic) BOOL hasMainTextButton;
@property (nonatomic) NSMutableArray deputyTextArray;
@property (nonatomic) Q deputyTextArray_Count;
@property (nonatomic) HTSLiveImage bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (nonatomic) HTSLiveProgressBar progressBar;
@property (nonatomic) BOOL hasProgressBar;
@property (nonatomic) NSMutableArray upperRightTextArray;
@property (nonatomic) Q upperRightTextArray_Count;
+ (id)descriptor;
@end
