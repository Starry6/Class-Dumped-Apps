@interface PARMoreResultsRequest : PARRequest
@property (nonatomic) NSURL moreResultsURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)moreResultsURL;
- (unsigned int)nwActivityLabel;
- (void)setMoreResultsURL:;
+ (BOOL)supportsSecureCoding;
@end
