@interface HTSLivePlayByPlayInfo : IESLivePBBaseMessage
@property (nonatomic) q matchId;
@property (nonatomic) NSMutableArray eventListArray;
@property (nonatomic) Q eventListArray_Count;
+ (id)descriptor;
@end
