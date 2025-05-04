@interface AWEHomePageContextTabNode : NSObject
@property (nonatomic) NSString tabId;
@property (nonatomic) q index;
@property (nonatomic) AWEHomePageContextTabNode selectedNode;
@property (nonatomic) NSArray childNodes;
- (id)selectedNode;
- (void)setSelectedNode:;
- (BOOL)isNodeSelectedWithTabId:;
- (id)getChildNodeUsingRecursiveWithTabId:;
- (BOOL)hasChildNodeWithTabId:;
- (void)setIndex:;
- (long long)index;
- (void).cxx_destruct;
- (id)childNodes;
- (void)setChildNodes:;
- (void)setTabId:;
- (id)tabId;
- (id)selectedNodes;
@end
