@interface HTSLiveStreamUrl_LiveCoreSDKData_PullData_Extension : IESLivePBBaseMessage
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Clip gameClip;
@property (nonatomic) BOOL hasGameClip;
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Clip cameraClip;
@property (nonatomic) BOOL hasCameraClip;
@property (nonatomic) NSInteger cameraHidden;
@property (nonatomic) NSString ts;
@property (nonatomic) q refresh;
@property (nonatomic) NSInteger displayMode;
@property (nonatomic) NSInteger gameHidden;
@property (nonatomic) NSString gameRoomId;
@property (nonatomic) NSInteger layout;
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Clip cameraClipCustom;
@property (nonatomic) BOOL hasCameraClipCustom;
@property (nonatomic) NSInteger cameraVerticalType;
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_CameraHorizontalPosition cameraHorizontalPosition;
@property (nonatomic) BOOL hasCameraHorizontalPosition;
@property (nonatomic) NSInteger cameraHorizontalHidden;
+ (id)descriptor;
@end
