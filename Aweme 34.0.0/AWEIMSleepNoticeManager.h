@interface AWEIMSleepNoticeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEIMModuleServiceHTSAdaper;
- (void)showSleepNoticePopupView;
- (id)p_sleepNoticeFlagKey:;
- (id)p_sleepNoticeCountKey;
- (id)p_sleepNoticeDateKey;
- (void)trackSleepNoticeClick;
- (BOOL)canShowSleepNotice:message:;
- (void)trackSleepNoticeShow;
- (void)setSleepNotice:;
+ (id)sharedIntance;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;
@end
