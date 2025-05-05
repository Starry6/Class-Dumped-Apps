@interface HTSLiveLinkerWaitingListChangeContent : IESLivePBBaseMessage
@property (nonatomic) IESLivePreRTCInfo preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) NSMutableArray listUsersArray;
@property (nonatomic) Q listUsersArray_Count;
@property (nonatomic) q version;
+ (id)descriptor;
@end
