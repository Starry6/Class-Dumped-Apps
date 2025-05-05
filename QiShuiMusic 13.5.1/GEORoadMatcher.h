@interface GEORoadMatcher : NSObject
@property (nonatomic) BOOL useRawLocations;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)matchLocation:forTransportType:;
- (id)_bestCandidateSegmentForLocation:transportType:;
- (BOOL)useRawLocations;
- (void)setUseRawLocations:;
@end
