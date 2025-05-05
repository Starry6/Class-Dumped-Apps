@interface CalWidgetUtils : NSObject
+ (void)refreshDateWidgets;
+ (double)lookaheadIntervalForDaysPerEntry:;
+ (void)refreshEventWidgets;
+ (void)_refreshWidgetKinds:reason:;
@end
