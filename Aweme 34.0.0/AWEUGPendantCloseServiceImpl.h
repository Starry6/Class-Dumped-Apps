@interface AWEUGPendantCloseServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackLogWithKey:message:;
+ (double)getCanShowTimeWithPendantID:;
+ (long long)checkPendantCloseTotalCountWithPendantID:;
+ (long long)checkPendantCloseInDays:pendantID:;
+ (long long)checkPendantCloseInDate:pendantID:;
+ (void)recordCloseWithPendantID:;
+ (void)clearCloseRecordsWithPendantID:;
+ (void)clearCloseRecordsAndTimeWithPendantID:;
+ (void)caculateIfNeedHideWithDays:maxCloseTimes:willNotShow:pendantID:;
+ (void)recordCloseTypeColdLaunchShowTimesWithPendantID:;
+ (long long)checkRecordCloseTypeColdLaunchShowTimesWithPendantID:;
+ (double)getCanShowTimeWithGlobalFrequent;
+ (void)caculateIfNeedHideWithGlobalFrequentMaxCloseTimes:willNotShow:;
+ (void)recordGlobalFrequentClose;
+ (void)clearGlobalFrequentCloseRecords;
+ (void)clearGlobalFrequentCloseRecordsAndTime;
+ (double)getCanShowTimeFrequentOnceWithPendantID:;
+ (void)caculateIfNeedHideWithFrequentOnceDays:maxCloseTimes:willNotShow:pendantID:;
+ (id)getStartTimeOfToday:;
+ (BOOL)needClearRecordsWhenTakeEffect;
+ (id)dateFromString:;
+ (long long)daysBetweenDate:andDate:;
@end
