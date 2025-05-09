@interface NATreeNode : NSObject
@property (nonatomic) NSMutableSet internalChildNodes;
@property (nonatomic) @ representedObject;
@property (nonatomic) NSSet childNodes;
@property (nonatomic) NSEnumerator shallowRepresentedObjectEnumerator;
@property (nonatomic) NSEnumerator shallowNodeEnumerator;
@property (nonatomic) NSEnumerator deepNodeEnumerator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)childNodes;
- (id)representedObject;
- (void)setRepresentedObject:;
- (id)initWithRepresentedObject:;
- (id)initWithRepresentedObject:childNodes:;
- (id)_descriptionBuilderWithMultilinePrefix:;
- (id)deepNodeEnumerator;
- (id)shallowNodeEnumerator;
- (id)shallowRepresentedObjectEnumerator;
- (id)childrenSortedByComparator:;
- (id)childAtIndexPath:withChildrenSortedByComparator:;
- (id)internalChildNodes;
- (void)setInternalChildNodes:;
+ (id)na_identity;
@end
