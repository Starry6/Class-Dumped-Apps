@interface PARFlightResponse : PARResponse
@property (nonatomic) NSArray flightResults;
- (void).cxx_destruct;
- (id)description;
- (id)flightResults;
- (void)setFlightResults:;
+ (id)responseFromReply:;
+ (id)_debugResponseFromReply:;
@end
