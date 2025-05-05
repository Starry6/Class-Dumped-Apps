@interface HTSLiveShowMultiCameraChangeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray cameraInfosArray;
@property (nonatomic) Q cameraInfosArray_Count;
@property (nonatomic) q randomlyBreakUpTime;
+ (id)descriptor;
@end
