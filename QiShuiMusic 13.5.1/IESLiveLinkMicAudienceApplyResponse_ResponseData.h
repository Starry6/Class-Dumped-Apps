@interface IESLiveLinkMicAudienceApplyResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString prompts;
@property (nonatomic) NSInteger vendor;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) BOOL autoJoin;
@property (nonatomic) q waitingListOffset;
@property (nonatomic) NSInteger silenceStatus;
@property (nonatomic) HTSLiveText fastMatchDisplayText;
@property (nonatomic) BOOL hasFastMatchDisplayText;
@property (nonatomic) NSInteger linkType;
@property (nonatomic) q linkmicId;
@property (nonatomic) q weightDecayType;
@property (nonatomic) BOOL autoJoinFull;
@property (nonatomic) IESLiveMicPosTagInfo micPosTagInfo;
@property (nonatomic) BOOL hasMicPosTagInfo;
@property (nonatomic) IESLiveEarlyInitRtcEnginelData earlyInitRtcEngineData;
@property (nonatomic) BOOL hasEarlyInitRtcEngineData;
@property (nonatomic) NSString linkerSessionId;
@property (nonatomic) NSString subRtcExtInfo;
+ (id)descriptor;
@end
