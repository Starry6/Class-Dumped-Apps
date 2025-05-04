@interface AWEIMComponentViewCache : NSObject
@property (nonatomic) NSMutableDictionary storage;
@property (nonatomic) q createViewCount;
@property (nonatomic) NSMutableSet leafViewSet;
- (long long)createViewCount;
- (void)setCreateViewCount:;
- (void)setView:forKey:isLeaf:;
- (void)removeViewsForKeys:;
- (id)currentStorage;
- (id)leafNodeViewSet;
- (id)leafViewSet;
- (void)setLeafViewSet:;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (id)viewForKey:;
- (id)allViews;
- (void).cxx_destruct;
@end
