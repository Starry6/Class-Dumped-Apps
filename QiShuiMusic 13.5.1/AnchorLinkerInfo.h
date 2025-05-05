@interface AnchorLinkerInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userInfoArray;
@property (nonatomic) Q userInfoArray_Count;
@property (nonatomic) q linkerId;
+ (id)descriptor;
@end
