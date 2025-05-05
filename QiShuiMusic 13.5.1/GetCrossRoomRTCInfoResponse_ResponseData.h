@interface GetCrossRoomRTCInfoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) IESLiveMultiChannelInfo backupMultiChannelInfo;
@property (nonatomic) BOOL hasBackupMultiChannelInfo;
@property (nonatomic) IESLivePreRTCInfo preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
@property (nonatomic) q preRtcVersion;
+ (id)descriptor;
@end
