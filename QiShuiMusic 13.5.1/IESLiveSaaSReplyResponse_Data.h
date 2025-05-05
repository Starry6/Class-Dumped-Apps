@interface IESLiveSaaSReplyResponse_Data : GPBMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) q linkmicId;
@property (nonatomic) NSInteger vendor;
@property (nonatomic) NSString rtcAppId;
@property (nonatomic) NSString rtcAppSign;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSInteger linkType;
@property (nonatomic) IESLiveSaaSPBMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveSaaSPBMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) IESLiveSaaSPBMCUContent mcuContent;
@property (nonatomic) BOOL hasMcuContent;
@property (nonatomic) NSString anchorLinkmicIdStr;
@property (nonatomic) IESLiveSaaSPBAnchorLinkmicInfo backupAnchorLinkmicInfo;
@property (nonatomic) BOOL hasBackupAnchorLinkmicInfo;
+ (id)descriptor;
@end
