@interface HTSLiveDynamicInfo : IESLivePBBaseMessage
@property (nonatomic) q showAfterTimeMs;
@property (nonatomic) NSMutableArray textArray;
@property (nonatomic) Q textArray_Count;
@property (nonatomic) q durationMs;
+ (id)descriptor;
@end
