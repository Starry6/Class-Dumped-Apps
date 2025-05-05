@interface IESLiveLinkMicAudienceFastMatchResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser matchedAnchor;
@property (nonatomic) BOOL hasMatchedAnchor;
@property (nonatomic) q matchedRoomId;
@property (nonatomic) BOOL stopMatch;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString reqId;
@property (nonatomic) NSMutableArray topicStrArray;
@property (nonatomic) Q topicStrArray_Count;
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSMutableArray linkedUserArray;
@property (nonatomic) Q linkedUserArray_Count;
@property (nonatomic) q countDownSeconds;
@property (nonatomic) q liveRoomMode;
@property (nonatomic) NSMutableArray resultTagArray;
@property (nonatomic) Q resultTagArray_Count;
@property (nonatomic) IESLiveLinkHostInfo host;
@property (nonatomic) BOOL hasHost;
@property (nonatomic) IESLiveMicPosTagInfo micPosTagInfo;
@property (nonatomic) BOOL hasMicPosTagInfo;
@property (nonatomic) NSString matchedRoomIdStr;
+ (id)descriptor;
@end
