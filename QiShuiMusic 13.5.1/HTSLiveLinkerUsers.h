@interface HTSLiveLinkerUsers : IESLivePBBaseMessage
@property (nonatomic) q count;
@property (nonatomic) NSMutableArray usersInfoArray;
@property (nonatomic) Q usersInfoArray_Count;
+ (id)descriptor;
@end
