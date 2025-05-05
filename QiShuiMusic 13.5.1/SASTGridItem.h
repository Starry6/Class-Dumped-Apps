@interface SASTGridItem : AceObject
@property (nonatomic) NSArray gridCells;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)gridCells;
- (void)setGridCells:;
+ (id)gridItem;
+ (id)gridItemWithDictionary:context:;
@end
