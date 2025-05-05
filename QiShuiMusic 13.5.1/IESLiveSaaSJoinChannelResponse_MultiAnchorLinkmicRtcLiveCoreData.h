@interface IESLiveSaaSJoinChannelResponse_MultiAnchorLinkmicRtcLiveCoreData : GPBMessage
@property (nonatomic) IESLiveSaaSPBMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveSaaSPBMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) Q version;
+ (id)descriptor;
@end
