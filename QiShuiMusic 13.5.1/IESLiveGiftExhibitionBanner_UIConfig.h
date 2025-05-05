@interface IESLiveGiftExhibitionBanner_UIConfig : IESLivePBBaseMessage
@property (nonatomic) NSString textColor;
@property (nonatomic) NSMutableArray gradientColorArray;
@property (nonatomic) Q gradientColorArray_Count;
@property (nonatomic) HTSLiveImage backgroundIcon;
@property (nonatomic) BOOL hasBackgroundIcon;
@property (nonatomic) NSString borderColor;
@property (nonatomic) NSString titleColorV3;
@property (nonatomic) NSString textColorV3;
+ (id)descriptor;
@end
