@interface IESLiveHonorWallV2 : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray honorWallElementArray;
@property (nonatomic) Q honorWallElementArray_Count;
@property (nonatomic) BOOL honorWallSwitch;
+ (id)descriptor;
@end
