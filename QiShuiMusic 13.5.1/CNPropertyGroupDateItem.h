@interface CNPropertyGroupDateItem : CNPropertyGroupItem
- (BOOL)isEmpty;
- (id)normalizedValue;
- (BOOL)isValidValue:;
- (id)defaultActionURL;
- (id)displayStringForValue:;
- (BOOL)isEquivalentToItem:;
- (id)bestValue:;
- (id)placeholderString;
- (id)valueForDisplayString:;
+ (id)dateDisplayStringFromComponents:;
+ (id)calendarForLabel:;
+ (id)initialValueForLabel:group:;
+ (id)emptyValueForLabel:;
+ (id)propertyGroupItemWithLabeledValue:group:contact:;
+ (BOOL)isEmptyDateComponents:;
+ (id)localeAndCalendarPairFromDateComponents:;
@end
