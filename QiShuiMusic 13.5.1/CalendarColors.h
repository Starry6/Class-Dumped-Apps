@interface CalendarColors : NSObject
+ (id)grayColor;
+ (id)symbolicColorForNewCalendarWithExistingSymbolicNames:;
+ (int)countOfColor:inArray:;
+ (id)colorNamesOrderedForAssignment;
+ (id)defaultCalendarColorNames;
+ (void)_bootstrapColorNameMapping;
+ (void)_rebuildColors;
+ (id)nameOfColor:;
+ (id)colorForName:;
+ (id)birthdayCalendarColor;
+ (id)facebookCalendarColor;
+ (id)textColorForName:;
+ (id)localizedColorNameForColorName:;
@end
