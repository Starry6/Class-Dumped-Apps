@interface AWEIMForceInsertChat_Group : AWEIMComponentBase
@property (nonatomic) AWEIMChatModel chatModel;
@property (nonatomic) BFTask applyJoinRecommendSchoolGroupTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)chatModel;
- (void)setChatModel:;
- (id)forceInsertDecisionNode;
- (void)didClickForceInsertChatCell:chatCell:chatListVC:;
- (void)didRemoveForceInsertChat:;
- (id)applyJoinRecommendSchoolGroupTask;
- (void)setApplyJoinRecommendSchoolGroupTask:;
- (unsigned long long)priority;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
