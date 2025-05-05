@interface HTSLiveVSWatermark : IESLivePBBaseMessage
@property (nonatomic) q position;
@property (nonatomic) q landscapeDis;
@property (nonatomic) q verticalDis;
@property (nonatomic) NSMutableArray watermarkIconArray;
@property (nonatomic) Q watermarkIconArray_Count;
+ (id)descriptor;
@end
