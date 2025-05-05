@interface HTSLiveLinkerBanContent : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray banUsersArray;
@property (nonatomic) Q banUsersArray_Count;
+ (id)descriptor;
@end
