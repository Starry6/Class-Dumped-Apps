@interface AWEUGAlertManager : HTSService
@property (nonatomic) NSArray alertTypeArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow:;
- (double)getCurrTime;
- (void)recordAlertShowedAt:;
- (void)recordUserGrantedPermission:;
- (void)registerAlertType:;
- (id)alertTypeArray;
- (void)setAlertTypeArray:;
- (id)AWEUGAlertType;
- (void)recordAlertFirstTriggeredAt:;
- (BOOL)p_canShowAtFrequency:WithAlertType:;
- (BOOL)p_canShowAlertHide:WithAlertType:;
- (BOOL)p_canShowTimesDenied:WithAlertType:;
- (void)p_sortRecord:;
- (BOOL)p_checkShowFrequency:current:inRecord:maxCount:;
- (BOOL)p_checkElapsedTimeWithinRange:currTime:range:;
- (void).cxx_destruct;
@end
