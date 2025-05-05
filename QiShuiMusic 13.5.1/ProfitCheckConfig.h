@interface ProfitCheckConfig : IESLivePBBaseMessage
@property (nonatomic) BOOL needReport;
@property (nonatomic) NSMutableArray configsArray;
@property (nonatomic) Q configsArray_Count;
+ (id)descriptor;
@end
