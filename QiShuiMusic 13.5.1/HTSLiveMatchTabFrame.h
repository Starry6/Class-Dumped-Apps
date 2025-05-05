@interface HTSLiveMatchTabFrame : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray tabsArray;
@property (nonatomic) Q tabsArray_Count;
@property (nonatomic) NSMutableArray replayTabsArray;
@property (nonatomic) Q replayTabsArray_Count;
@property (nonatomic) NSString color;
@property (nonatomic) NSString backgroundColor;
+ (id)descriptor;
@end
