@interface IESLiveLinkMicAudienceReplyResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) q linkmicId;
@property (nonatomic) NSInteger vendor;
@property (nonatomic) NSString rtcAppId;
@property (nonatomic) NSString rtcAppSign;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSInteger linkType;
@property (nonatomic) IESLiveMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) IESLiveMCUContent mcuContent;
@property (nonatomic) BOOL hasMcuContent;
@property (nonatomic) NSString anchorLinkmicIdStr;
@property (nonatomic) HTSLiveAnchorLinkmicInfo backupAnchorLinkmicInfo;
@property (nonatomic) BOOL hasBackupAnchorLinkmicInfo;
@property (nonatomic) IESLiveLinkMicAudienceReplyResponse_EarlyJoinChannelData joinChannelResponse;
@property (nonatomic) BOOL hasJoinChannelResponse;
+ (id)descriptor;
@end
