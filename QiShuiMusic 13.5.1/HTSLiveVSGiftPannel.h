@interface HTSLiveVSGiftPannel : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray backgroundColorsArray;
@property (nonatomic) Q backgroundColorsArray_Count;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) HTSLiveImage selected;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) HTSLiveImage topTitle;
@property (nonatomic) BOOL hasTopTitle;
@property (nonatomic) HTSLiveImage backgroundBottom;
@property (nonatomic) BOOL hasBackgroundBottom;
@property (nonatomic) HTSLiveImage backgroundTop;
@property (nonatomic) BOOL hasBackgroundTop;
+ (id)descriptor;
@end
