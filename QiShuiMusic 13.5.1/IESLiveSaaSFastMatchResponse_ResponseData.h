@interface IESLiveSaaSFastMatchResponse_ResponseData : GPBMessage
@property (nonatomic) IESLiveSaaSPBUser matchedAnchor;
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
+ (id)descriptor;
@end
