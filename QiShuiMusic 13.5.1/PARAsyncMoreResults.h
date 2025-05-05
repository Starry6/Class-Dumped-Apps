@interface PARAsyncMoreResults : SFMoreResults
@property (nonatomic) double scale;
@property (nonatomic) NSURL moreResultsURL;
@property (nonatomic) Q queryId;
@property (nonatomic) Q clientQueryId;
- (void)setScale:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)queryId;
- (double)scale;
- (id)moreResultsURL;
- (unsigned long long)clientQueryId;
+ (BOOL)supportsSecureCoding;
+ (id)moreResults:label:session:scale:queryId:clientQueryId:;
+ (id)moreResults:label:session:scale:queryId:;
@end
