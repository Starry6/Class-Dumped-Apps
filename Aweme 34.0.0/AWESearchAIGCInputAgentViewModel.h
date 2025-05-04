@interface AWESearchAIGCInputAgentViewModel : NSObject
@property (nonatomic) NSArray cacheAgentListList;
@property (nonatomic) AWESearchAIGCInputAgentModel videoRSAgent;
@property (nonatomic) NSArray agentList;
@property (nonatomic) <AWESearchAIGCInputAgentViewModelDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)agentList;
- (BOOL)inputAgentIsEmpty;
- (void)inputAgentRefreshWithVideoID:conversationID:;
- (void)inputAgentRefreshLocalData;
- (id)getCacheAgentModelList;
- (void)refreshCacheAgentModelList;
- (id)cacheAgentListList;
- (void)setCacheAgentListList:;
- (void)setCacheAgentModelList:;
- (void)setVideoRSAgent:;
- (id)videoRSAgent;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
