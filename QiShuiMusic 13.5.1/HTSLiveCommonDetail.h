@interface HTSLiveCommonDetail : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage leftIcon;
@property (nonatomic) BOOL hasLeftIcon;
@property (nonatomic) NSMutableArray mainTextArray;
@property (nonatomic) Q mainTextArray_Count;
@property (nonatomic) NSMutableArray deputyTextArray;
@property (nonatomic) Q deputyTextArray_Count;
@property (nonatomic) HTSLiveTouchButton rightButton;
@property (nonatomic) BOOL hasRightButton;
@property (nonatomic) NSMutableArray upperLeftTextArray;
@property (nonatomic) Q upperLeftTextArray_Count;
@property (nonatomic) NSMutableArray mainTextDescArray;
@property (nonatomic) Q mainTextDescArray_Count;
@property (nonatomic) HTSLiveProgressBar progressBar;
@property (nonatomic) BOOL hasProgressBar;
@property (nonatomic) HTSLiveImage bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (nonatomic) HTSLiveMultiStageProgressBar multiStageProgressBar;
@property (nonatomic) BOOL hasMultiStageProgressBar;
+ (id)descriptor;
@end
