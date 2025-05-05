@interface CNPropertyGroupAlertItem : CNPropertyGroupItem
- (id)displayLabel;
- (id)labeledValue;
- (id)description;
- (BOOL)isValidValue:;
- (void)setLabeledValue:;
- (id)displayStringForValue:;
- (id)replacementForInvalidValue:;
- (BOOL)canRemove;
- (BOOL)isEquivalentToItem:whenEditing:;
- (id)_toneManager;
- (id)_vibrationManager;
+ (id)emptyValueForLabel:;
@end
