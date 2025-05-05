@interface WBSCyclerItemListRepresentation : WBSCyclerItemRepresentation
@property (nonatomic) Q numberOfChildren;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEquivalent:;
- (void)addChild:;
- (id)copyWithZone:;
- (unsigned long long)numberOfChildren;
- (id)initWithTitle:uniqueIdentifier:;
- (id)pairsOfItemsWithDifferingExtraAttributesComparedTo:;
- (void)insertChild:atIndex:;
- (void)deleteChild:;
- (void)deleteDescendant:;
- (void)deleteAllChildren;
- (BOOL)containsChild:;
- (BOOL)containsChildPassingTest:;
- (BOOL)containsDescendant:;
- (id)childAtIndex:;
- (id)descendantWithUniqueIdentifier:;
- (id)randomDescendantPassingTest:;
- (id)allDescendantsPassingTest:;
- (id)randomDescendant;
- (id)randomListDescendant;
- (BOOL)_tryToDeleteDescendant:;
+ (BOOL)supportsSecureCoding;
@end
