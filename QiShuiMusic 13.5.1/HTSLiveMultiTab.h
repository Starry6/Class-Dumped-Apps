@interface HTSLiveMultiTab : IESLivePBBaseMessage
@property (nonatomic) NSString tabTitleColor;
@property (nonatomic) NSMutableArray tabsArray;
@property (nonatomic) Q tabsArray_Count;
@property (nonatomic) NSInteger switchOn;
@property (nonatomic) NSInteger disableBackground;
+ (id)descriptor;
@end
