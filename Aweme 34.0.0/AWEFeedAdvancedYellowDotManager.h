@interface AWEFeedAdvancedYellowDotManager : NSObject
@property (nonatomic) BOOL isBubbleCloseFired;
@property (nonatomic) NSString insertFeedId;
@property (nonatomic) NSString insertRoomId;
@property (nonatomic) NSString interposeRoomIDList;
@property (nonatomic) NSMutableDictionary yellowDotOrBubbleShowInfo;
@property (nonatomic) NSString followInsertAwemeIds;
@property (nonatomic) BOOL isLiveSpecialFollowDot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)yellowDotOrBubbleShowInfo;
- (void)hideAdvancedYellowDotIfNeed;
- (BOOL)enableShowBubbleWithConfig:;
- (void)liveBubbleShowInfoRecordWithMode:params:;
- (void)liveBubbleClickedInfoRecordWithMode:;
- (void)liveBubbleDismissInfoRecordWithMode:reason:;
- (void)liveYellowDotShowInfoRecordWithDotType:componentID:isBubbleDemote:;
- (id)insertFeedAwemeId;
- (void)cleanFeedAwemeId;
- (id)insertFeedRoomId;
- (id)interposeFeedRoomIDList:;
- (BOOL)isLiveSpecialFollowDot;
- (void)setFollowInsertAwemeIds:;
- (void)setInterposeRoomIDList:;
- (void)setIsLiveSpecialFollowDot:;
- (void)bubbleDidShowWithMode:;
- (id)interposeRoomIDList;
- (void)setInsertFeedId:;
- (void)setInsertRoomId:;
- (BOOL)canShowAdvancedYellowDotWithNotifyMode:authorInfo:;
- (void)yellowDotDidShowWithConfig:;
- (id)insertFeedId;
- (id)followInsertAwemeIds;
- (id)insertRoomId;
- (BOOL)canShowAdvancedYellowdot;
- (BOOL)bubbleStrategyEnable;
- (BOOL)didMeetYellowDotSafeguardFrequency:;
- (BOOL)meetShowBubbleWithFrequencyWithMode:;
- (void)setYellowDotOrBubbleShowInfo:;
- (BOOL)didNeedAvoidConcernInnerPush;
- (BOOL)isBubbleCloseFired;
- (void)setIsBubbleCloseFired:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
