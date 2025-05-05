@interface PLYearGroupingRule : NSObject
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)calendar;
- (void)titlesForHighlightItemList:dateRangeTitleGenerator:resultBlock:;
- (unsigned long long)dominantYearForStartDate:endDate:;
- (BOOL)highlightItemList:canBeMergedWithOtherHighlightItemList:;
- (void).cxx_destruct;
- (BOOL)highlightItem:belongsToHighlightItemList:;
- (void)titlesForHighlightItemList:dateRangeTitleGenerator:forceUpdateLocale:resultBlock:;
@end
