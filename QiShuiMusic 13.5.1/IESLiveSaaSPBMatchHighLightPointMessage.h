@interface IESLiveSaaSPBMatchHighLightPointMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray pointsArray;
@property (nonatomic) Q pointsArray_Count;
+ (id)descriptor;
@end
