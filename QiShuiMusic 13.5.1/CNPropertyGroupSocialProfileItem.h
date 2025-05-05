@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem
@property (nonatomic) CNSocialProfile profile;
- (id)displayLabel;
- (id)profile;
- (id)defaultActionURL;
- (id)displayStringForValue:;
- (BOOL)isEquivalentToItem:;
- (id)valueForDisplayString:;
- (id)editingStringValue;
+ (id)displayStringForSocialProfile:;
+ (id)displayLabelForSocialProfile:forPropertyKey:;
+ (id)emptyValueForLabel:;
@end
