@interface EMStatusUpdateProvider : NSObject
- (void).cxx_destruct;
- (id)statusUpdateStringWithDate:now:nextTransition:;
- (unsigned long long)statusUpdateWithDate:now:nextTransition:;
- (id)_statusUpdatedMinutesAgoWithDate:now:;
- (id)_statusUpdatedAtTimeWithDate:;
- (id)_statusUpdatedOnDayWithDate:;
- (id)_statusUpdatedOnDateWithDate:;
@end
