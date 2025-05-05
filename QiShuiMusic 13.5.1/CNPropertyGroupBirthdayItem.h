@interface CNPropertyGroupBirthdayItem : CNPropertyGroupDateItem
- (id)displayLabel;
- (void)updateLabeledValueWithLabel:;
- (id)labeledValueToCurateFromSuggestion;
+ (id)calendarForLabel:;
+ (id)initialValueForLabel:group:;
+ (id)_dateForGroup:;
@end
