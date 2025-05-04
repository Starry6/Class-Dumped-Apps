@interface AWEProfileHeaderSignatureRiskNoticeManager : NSObject
@property (nonatomic) q riskNoticeUserHomeCount;
@property (nonatomic) q riskNoticeUserDetailCount;
@property (nonatomic) NSMutableDictionary riskNoticeDicts;
- (void)consumedRiskNoticeWithContext:;
- (BOOL)shouldShowRiskNoticeWithContext:;
- (id)noticeMessageWithContext:;
- (id)noticeRouterUrlWithContext:;
- (BOOL)determineIsEcommerceRiskNoticeWithContext:;
- (void)setRiskNoticeUserHomeCount:;
- (void)setRiskNoticeUserDetailCount:;
- (void)setRiskNoticeDicts:;
- (id)riskNoticeDictWith:;
- (id)loginUserId;
- (long long)riskNoticeUserDetailCount;
- (id)riskNoticeDicts;
- (long long)riskNoticeUserHomeCount;
- (id)todayDateString;
- (void).cxx_destruct;
+ (id)signatureRiskNoticStorageKey;
+ (id)dateStringKey;
+ (id)manager;
@end
