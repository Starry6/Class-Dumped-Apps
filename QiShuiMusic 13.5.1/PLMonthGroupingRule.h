@interface PLMonthGroupingRule : NSObject
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)calendar;
- (id)fallbackHighlightItemFromAllHighlightItems:withSharingConsideration:;
- (void)titlesForHighlightItemList:dateRangeTitleGenerator:resultBlock:;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
- (BOOL)highlightItemHasMinimumRequirementToBePromoted:withSharingConsideration:;
- (BOOL)highlightItemList:canBeMergedWithOtherHighlightItemList:;
- (id)highlightItemsSortedByImportance:withSharingConsideration:;
- (void).cxx_destruct;
- (BOOL)highlightItem:belongsToHighlightItemList:;
- (id)dominantMonthDateComponentForStartDateComponents:endDateComponents:numberOfDaysInMonthOfStartDate:;
- (void)titlesForHighlightItemList:dateRangeTitleGenerator:forceUpdateLocale:resultBlock:;
@end
