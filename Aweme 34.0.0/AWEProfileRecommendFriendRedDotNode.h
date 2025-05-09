@interface AWEProfileRecommendFriendRedDotNode : NSObject
@property (nonatomic) <AWEProfileRedDotNodeProtocol> parentNode;
@property (nonatomic) <AWEProfileRedDotNodeModelProtocol> currentModel;
@property (nonatomic) BOOL canTrackAddFriendsDotImpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showViews;
- (void)setShowViews:;
- (long long)recommendCount;
- (id)currentShowModel;
- (void)setCurrentShowModel:;
- (void)setCanTrackAddFriendsDotImpression:;
- (void)refreshRecommendFriendShowViewWithScene:;
- (void)fetchRecommendFriendCountInEntryWithScene:;
- (void)bindParentNode:;
- (void)bindAdapter:;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (void)bindShowView:;
- (void)removeShowView:;
- (BOOL)recommendCountRequestOnAir;
- (void)setRecommendCountRequestOnAir:;
- (BOOL)canTrackAddFriendsDotImpression;
- (void)entryDidClicked;
- (void)showRedDotInEntryIfNeed;
- (void)hideRedDotInEntry;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)parentNode;
- (id)currentModel;
- (void)setParentNode:;
- (void)setCurrentModel:;
- (void)updateWithModel:;
@end
