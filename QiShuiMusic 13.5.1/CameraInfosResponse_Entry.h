@interface CameraInfosResponse_Entry : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray vsCameraInfosArray;
@property (nonatomic) Q vsCameraInfosArray_Count;
@property (nonatomic) NSString entryLinkedRoomTitleText;
@property (nonatomic) NSString entryMultiCameraTitleText;
@property (nonatomic) NSString entryLinkedRoomSubTitleText;
@property (nonatomic) NSString entryMultiCameraSubTitleText;
+ (id)descriptor;
@end
