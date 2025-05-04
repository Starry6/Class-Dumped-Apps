@interface AWEProfileFavoriteFirstTabRedDotAdapter : NSObject
@property (nonatomic) <AWEProfileRedDotNodeModelProtocol> model;
@property (nonatomic) NSHashTable showViews;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showViews;
- (void)setShowViews:;
- (void)bindShowView:;
- (void)removeShowView:;
- (void)addRedDotNode:;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
