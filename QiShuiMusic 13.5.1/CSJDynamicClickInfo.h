@interface CSJDynamicClickInfo : NSObject
@property (nonatomic) q downTime;
@property (nonatomic) q upTime;
@property (nonatomic) {CGPoint=dd} reportDownPoint;
@property (nonatomic) {CGPoint=dd} reportUpPoint;
@property (nonatomic) UIView responseView;
@property (nonatomic) {CGPoint=dd} downPoint;
@property (nonatomic) {CGPoint=dd} upPoint;
@property (nonatomic) q clickViewSource;
@property (nonatomic) BOOL openPlayableLandingPage;
@property (nonatomic) BOOL removeOpenPlayableLandingPage;
@property (nonatomic) q clickAreaCategory;
@property (nonatomic) q convertActionType;
- (long long)clickViewSource;
- (id)reportDownPoint;
- (id)upPoint;
- (long long)clickAreaCategory;
- (long long)convertActionType;
- (id)csj_dictionaryValue;
- (id)downPoint;
- (long long)downTime;
- (void)mapToView:;
- (BOOL)openPlayableLandingPage;
- (BOOL)removeOpenPlayableLandingPage;
- (id)reportUpPoint;
- (void)setClickAreaCategory:;
- (void)setClickViewSource:;
- (void)setConvertActionType:;
- (void)setDownPoint:;
- (void)setDownTime:;
- (void)setOpenPlayableLandingPage:;
- (void)setRemoveOpenPlayableLandingPage:;
- (void)setReportDownPoint:;
- (void)setReportUpPoint:;
- (void)setUpPoint:;
- (void)setUpTime:;
- (id)init;
- (long long)upTime;
- (void).cxx_destruct;
- (id)keyPrefix;
- (id)responseView;
- (void)setResponseView:;
@end
