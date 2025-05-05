@interface HTSLiveShootExtra : IESLivePBBaseMessage
@property (nonatomic) q shootTimes;
@property (nonatomic) NSMutableArray textArray;
@property (nonatomic) Q textArray_Count;
@property (nonatomic) q assetId;
+ (id)descriptor;
@end
