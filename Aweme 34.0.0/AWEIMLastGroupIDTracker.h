@interface AWEIMLastGroupIDTracker : NSObject
@property (nonatomic) NSMutableDictionary tempTrackDicM;
@property (nonatomic) double lastEnterMsgTabTime;
@property (nonatomic) NSString lastAuthorID;
@property (nonatomic) NSString lastGroupID;
- (id)lastAuthorID;
- (void)feedTableViewControllerWillPlayAweme:;
- (void)setLastAuthorID:;
- (void)handleEnterMessageTabEvent;
- (void)setLastGroupID:;
- (id)lastGroupID;
- (void)cleanLastGroupIDWithConversationID:;
- (void)didEnterSingleChat:;
- (void)setCustomKey:value:conversationId:;
- (id)getLastGroupIDWithConversationID:;
- (id)customKey:conversationId:;
- (void)didTabBarChange:;
- (id)tempTrackDicM;
- (void)setLastEnterMsgTabTime:;
- (double)lastEnterMsgTabTime;
- (void)setTempTrackDicM:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedIMTracker;
@end
