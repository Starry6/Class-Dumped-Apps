@interface IESLiveMyLiveTabs : IESLivePBBaseMessage
@property (nonatomic) NSString defaultTab;
@property (nonatomic) NSMutableArray tabsArray;
@property (nonatomic) Q tabsArray_Count;
+ (id)descriptor;
@end
