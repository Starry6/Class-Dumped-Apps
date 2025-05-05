@interface FLEXURLTransaction : FLEXNetworkTransaction
@property (nonatomic) NSURLRequest request;
@property (nonatomic) NSArray details;
- (id)primaryDescription;
- (id)secondaryDescription;
- (id)tertiaryDescription;
- (id)copyString;
- (BOOL)matchesQuery:;
- (id)request;
- (id)details;
- (void).cxx_destruct;
+ (id)withRequest:startTime:;
@end
