@interface TimeLimitPkRecord : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray pkUserInfosArray;
@property (nonatomic) Q pkUserInfosArray_Count;
@property (nonatomic) q startTime;
@property (nonatomic) q recId;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
