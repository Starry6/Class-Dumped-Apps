@interface AWEUGPendantClickLimitServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackLogWithKey:message:;
+ (void)recordPendantHasShowWithPendantID:;
+ (void)recordPendantHasClick:pendantID:;
+ (double)getCanShowTimeWithPendantID:;
+ (void)clearClickRecordsWithPendantID:;
+ (void)clearClickRecordsAndTimeWithPendantID:;
+ (long long)getExposedDaysWithoutClickForPendantID:;
+ (void)caculateIfNeedHideWithDays:willNotShow:pendantID:;
+ (id)getStartTimeOfToday:;
+ (BOOL)checkPendantNotClickDaysInDays:pendantID:;
+ (id)getEndTimeOfToday:;
+ (id)dateFromString:;
@end
