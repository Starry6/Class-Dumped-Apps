@interface VKDebugTreeNode : NSObject
@property (nonatomic) VKDebugTreeNode parent;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray children;
- (id)children;
- (void)setChildren:;
- (BOOL)isExpandable;
- (void).cxx_destruct;
- (id)name;
- (id)parent;
- (id)initWithParent:;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:withParameter:;
@end
