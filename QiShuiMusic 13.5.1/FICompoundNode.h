@interface FICompoundNode : FICustomNode
- (void).cxx_destruct;
- (id)fileURL;
- (id).cxx_construct;
- (id)fpItem;
- (void)synchronizeChildren:events:;
- (id)nodesToObserve;
- (void)dispatchEvent:forObserver:;
- (id)iteratorIncludingInvisibleItems:;
- (id)initWithFINodes:;
@end
