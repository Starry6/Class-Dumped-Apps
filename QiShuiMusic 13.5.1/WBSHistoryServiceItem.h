@interface WBSHistoryServiceItem : WBSHistoryServiceObject
@property (nonatomic) q visitCount;
@property (nonatomic) q visitCountScore;
@property (nonatomic) q statusCode;
@property (nonatomic) BOOL shouldRecomputeDerivedVisitCountScores;
@property (nonatomic) NSString url;
@property (nonatomic) NSData dailyVisitCounts;
@property (nonatomic) NSData weeklyVisitCounts;
- (void)setStatusCode:;
- (id)url;
- (long long)visitCount;
- (long long)statusCode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)shouldRecomputeDerivedVisitCountScores;
- (long long)visitCountScore;
- (void)setVisitCount:;
- (id)initWithSQLRow:;
- (id)initWithItem:;
- (void)setVisitCountScore:;
- (void)setShouldRecomputeDerivedVisitCountScores:;
- (id)dailyVisitCounts;
- (void)setDailyVisitCounts:;
- (id)weeklyVisitCounts;
- (void)setWeeklyVisitCounts:;
+ (BOOL)supportsSecureCoding;
@end
