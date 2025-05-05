@interface IESLiveSaaSPBInviteResponse_ResponseData : GPBMessage
@property (nonatomic) q channelId;
@property (nonatomic) NSInteger vendor;
@property (nonatomic) NSString channelIdStr;
@property (nonatomic) q scene;
@property (nonatomic) BOOL rtcJoinChannel;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSMutableArray roomTagsArray;
@property (nonatomic) Q roomTagsArray_Count;
@property (nonatomic) NSMutableArray userTagsArray;
@property (nonatomic) Q userTagsArray_Count;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) BOOL rtcPushStream;
@property (nonatomic) NSString signExtra;
@property (nonatomic) IESLiveSaaSPBMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveSaaSPBMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) IESLiveSaaSPBLinkmicInfoData linkmicInfo;
@property (nonatomic) BOOL hasLinkmicInfo;
@property (nonatomic) NSString toast;
@property (nonatomic) BOOL inviteeWithAudience;
+ (id)descriptor;
@end
