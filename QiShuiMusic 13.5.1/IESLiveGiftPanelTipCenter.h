@interface IESLiveGiftPanelTipCenter : NSObject
@property (nonatomic) NSMutableDictionary graph;
@property (nonatomic) NSMutableDictionary items;
- (void)p_addItem:;
- (void)p_showTipIfNeeded:sortedItems:context:;
- (id)p_sortedItemsFromGraph;
- (void)p_updateDP;
- (void)showTipsIfNeeded;
- (void)showTipsIfNeededWithContext:;
- (id)graph;
- (void)setGraph:;
- (id)init;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)graphDescription;
- (void)registerItem:;
@end
