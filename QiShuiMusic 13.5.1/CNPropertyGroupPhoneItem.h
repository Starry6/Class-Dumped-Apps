@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem
@property (nonatomic) CNPhoneNumber phoneNumber;
- (id)phoneNumber;
- (id)normalizedValue;
- (id)defaultActionURL;
- (id)displayStringForValue:;
- (id)valueForDisplayString:;
- (id)bestLabel:;
+ (id)emptyValueForLabel:;
@end
