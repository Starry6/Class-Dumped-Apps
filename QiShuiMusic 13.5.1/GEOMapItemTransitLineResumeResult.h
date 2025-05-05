@interface GEOMapItemTransitLineResumeResult : NSObject
@property (nonatomic) BOOL blocked;
@property (nonatomic) <GEOTransitDepartureSequence> departureSequence;
@property (nonatomic) NSDate earliestNextDepartureDate;
- (void).cxx_destruct;
- (BOOL)blocked;
- (void)setBlocked:;
- (id)departureSequence;
- (void)setDepartureSequence:;
- (id)earliestNextDepartureDate;
- (void)setEarliestNextDepartureDate:;
@end
