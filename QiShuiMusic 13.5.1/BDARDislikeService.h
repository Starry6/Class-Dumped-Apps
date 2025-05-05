@interface BDARDislikeService : NSObject
@property (nonatomic) TTHttpTask getReportsTask;
- (id)commonNetParams;
- (id)actualReportAdType;
- (id)chachedData;
- (id)dislikeUrl;
- (void)dislikeWithModel:adModel:complete:;
- (void)feedBackWithModel:adModel:complete:;
- (id)feedbackUrl;
- (id)getReportsTask;
- (void)loadReports:;
- (id)reportOrigin;
- (id)reportUrl;
- (void)setGetReportsTask:;
- (id)baseURL;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
