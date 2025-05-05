@interface BSUIDateLabelFactory : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_purgeRecycledLabels;
- (id)startLabelWithStartDate:endDate:timeZone:allDay:forStyle:;
- (id)endLabelWithStartDate:endDate:timeZone:allDay:forStyle:;
- (id)combinedDateLabelWithStartDate:endDate:timeZone:allDay:forStyle:;
- (void)recycleLabel:;
- (long long)styleForLabel:;
+ (id)sharedInstance;
@end
