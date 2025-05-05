@interface IESLiveSaaSPBVSCameraInfo : GPBMessage
@property (nonatomic) q cameraId;
@property (nonatomic) NSString cameraIdStr;
@property (nonatomic) NSString title;
@property (nonatomic) IESLiveSaaSPBImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) IESLiveSaaSPBImage coverVertical;
@property (nonatomic) BOOL hasCoverVertical;
@property (nonatomic) IESLiveSaaSPBStreamUrl streamInfo;
@property (nonatomic) BOOL hasStreamInfo;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSInteger style;
@property (nonatomic) IESLiveSaaSPBRoomAuthStatus cameraRoomAuth;
@property (nonatomic) BOOL hasCameraRoomAuth;
@property (nonatomic) NSInteger vrType;
@property (nonatomic) q groupId;
@property (nonatomic) NSInteger cameraType;
@property (nonatomic) IESLiveSaaSPBImage label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) q pcu;
@property (nonatomic) BOOL isSubscribed;
+ (id)descriptor;
@end
