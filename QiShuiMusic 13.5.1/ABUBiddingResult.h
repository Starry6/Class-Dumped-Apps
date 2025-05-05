@interface ABUBiddingResult : NSObject
@property (nonatomic) NSString requestID;
@property (nonatomic) NSString serverRequestID;
@property (nonatomic) NSArray winners;
@property (nonatomic) NSArray invalidNonServerBiddingResults;
@property (nonatomic) ABUBiddingWaterfallModel waterfall;
@property (nonatomic) NSString serverBiddingExtra;
@property (nonatomic) ABUBiddingAutoExpDetail autoDetail;
- (id)winners;
- (id)serverRequestID;
- (id)autoDetail;
- (id)invalidNonServerBiddingResults;
- (id)serverBiddingExtra;
- (id)waterfall;
- (id)initWithDict:;
- (id)requestID;
- (void).cxx_destruct;
@end
