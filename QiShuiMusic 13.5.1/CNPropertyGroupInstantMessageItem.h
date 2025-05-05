@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem
@property (nonatomic) CNInstantMessageAddress imAddress;
- (id)displayLabel;
- (id)defaultActionURL;
- (id)displayStringForValue:;
- (BOOL)isEquivalentToItem:;
- (id)valueForDisplayString:;
- (id)imAddress;
- (id)editingStringValue;
+ (id)emptyValueForLabel:;
@end
