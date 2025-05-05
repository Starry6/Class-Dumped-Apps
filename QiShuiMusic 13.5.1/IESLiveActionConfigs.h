@interface IESLiveActionConfigs : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray entrancesArray;
@property (nonatomic) Q entrancesArray_Count;
@property (nonatomic) IESLiveActionConfig flashShopping;
@property (nonatomic) BOOL hasFlashShopping;
+ (id)descriptor;
@end
