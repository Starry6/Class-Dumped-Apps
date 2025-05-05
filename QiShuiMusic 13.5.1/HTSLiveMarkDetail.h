@interface HTSLiveMarkDetail : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray itemMarkListV1Array;
@property (nonatomic) Q itemMarkListV1Array_Count;
@property (nonatomic) NSMutableArray itemMarkListV2Array;
@property (nonatomic) Q itemMarkListV2Array_Count;
+ (id)descriptor;
@end
