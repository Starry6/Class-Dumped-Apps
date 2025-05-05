@interface VSKeyPathBasedTreeNode : VSTreeNode
@property (nonatomic) NSString keyPath;
- (id)init;
- (id)keyPath;
- (void).cxx_destruct;
- (id)initWithRepresentedObject:;
- (id)initWithRepresentedObject:keyPath:;
@end
