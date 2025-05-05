@interface FIDSNode : FINode
- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)asTNode;
- (void)synchronizeChildren:events:;
- (id)nodesToObserve;
- (void)dispatchEvent:forObserver:;
- (id)iteratorIncludingInvisibleItems:;
@end
