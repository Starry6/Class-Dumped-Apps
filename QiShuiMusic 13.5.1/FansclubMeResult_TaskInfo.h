@interface FansclubMeResult_TaskInfo : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSMutableArray itemsArray;
@property (nonatomic) Q itemsArray_Count;
+ (id)descriptor;
@end
