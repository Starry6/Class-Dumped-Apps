@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem
@property (nonatomic) CNContactRelation contactRelation;
- (id)normalizedValue;
- (id)displayStringForValue:;
- (id)valueForDisplayString:;
- (id)contactRelation;
+ (id)emptyValueForLabel:;
@end
