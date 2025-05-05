@interface PermitResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) q linkMicId;
@property (nonatomic) BOOL joinable;
@property (nonatomic) NSInteger confluenceType;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString rtcAppId;
@property (nonatomic) NSString rtcAppSign;
@property (nonatomic) q channelId;
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) q fromRoomId;
@property (nonatomic) q toRoomId;
@property (nonatomic) NSInteger linkMicType;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) IESLiveAnchorLinkmicChannelInfo backupLinkmicInfo;
@property (nonatomic) BOOL hasBackupLinkmicInfo;
@property (nonatomic) BOOL bizJoinChannel;
@property (nonatomic) IESLiveAnchorLayoutInfo layoutInfo;
@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) IESLiveUserVersionInfo applyVersionInfo;
@property (nonatomic) BOOL hasApplyVersionInfo;
+ (id)descriptor;
@end
