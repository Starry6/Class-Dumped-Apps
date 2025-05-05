@interface WBSHistoryServiceURLCompletionMatchEntry : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString title;
@property (nonatomic) float topSitesScore;
@property (nonatomic) q visitCountScore;
@property (nonatomic) ^{_HistoryStreamedMatchEntry={?=II}**fq} streamData;
- (id)url;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (long long)visitCountScore;
- (id).cxx_construct;
- (float)topSitesScore;
- (id)initWithURLString:title:topSitesScore:visitCountScore:;
- (id)initWithStreamData:;
- (id)streamData;
+ (BOOL)supportsSecureCoding;
@end
