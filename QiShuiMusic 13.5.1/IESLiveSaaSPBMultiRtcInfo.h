@interface IESLiveSaaSPBMultiRtcInfo : GPBMessage
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSInteger rtcInfoOneOfCase;
@property (nonatomic) IESLiveSaaSPBVideoEqualRoomRtcInfo videoEqualRoomRtcInfo;
@property (nonatomic) IESLiveSaaSPBMultiAnchorLinkmicRtcInfo multiAnchorLinkmicRtcInfo;
@property (nonatomic) IESLiveSaaSPBVideoPositionRtcInfo videoPositionRtcInfo;
+ (id)descriptor;
@end
