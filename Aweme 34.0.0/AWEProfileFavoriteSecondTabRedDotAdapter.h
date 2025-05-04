@interface AWEProfileFavoriteSecondTabRedDotAdapter : NSObject
@property (nonatomic) NSMutableArray secondTabNodes;
@property (nonatomic) <AWEProfileRedDotShowViewProtocol> showView;
@property (nonatomic) <AWEProfileRedDotNodeModelProtocol> model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showView;
- (void)setShowView:;
- (void)bindShowView:;
- (void)addRedDotNode:;
- (id)secondTabNodes;
- (void)sortSecondTabNodes;
- (void)setSecondTabNodes:;
- (long long)currentNodesCount;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
