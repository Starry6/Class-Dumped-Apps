@interface HTSLiveMatchHighLightPointMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray pointsArray;
@property (nonatomic) Q pointsArray_Count;
+ (id)descriptor;
@end
