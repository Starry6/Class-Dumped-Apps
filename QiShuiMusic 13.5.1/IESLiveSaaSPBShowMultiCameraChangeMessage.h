@interface IESLiveSaaSPBShowMultiCameraChangeMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray cameraInfosArray;
@property (nonatomic) Q cameraInfosArray_Count;
@property (nonatomic) q randomlyBreakUpTime;
+ (id)descriptor;
@end
