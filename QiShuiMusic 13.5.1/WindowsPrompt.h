@interface WindowsPrompt : IESLivePBBaseMessage
@property (nonatomic) NSString titleText;
@property (nonatomic) NSString bodyText;
@property (nonatomic) NSMutableArray buttonInfoArray;
@property (nonatomic) Q buttonInfoArray_Count;
+ (id)descriptor;
@end
