@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem
@property (nonatomic) CNPostalAddress address;
- (id)normalizedValue;
- (id)address;
- (id)defaultActionURL;
- (id)displayStringForValue:;
- (BOOL)isEquivalentToItem:whenEditing:;
- (id)bestValue:;
- (BOOL)_isMinimalAddress:;
+ (id)emptyValueForLabel:;
@end
