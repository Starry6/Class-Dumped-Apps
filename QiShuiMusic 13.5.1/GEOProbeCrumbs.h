@interface GEOProbeCrumbs : NSObject
@property (nonatomic) BOOL enabled;
- (void)clearCache;
- (id)init;
- (void)dealloc;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithRoute:;
- (id)recentLocationHistory;
- (void)addLocation:polyCoordinate:timestamp:;
- (void)resetStateWithRoute:;
- (id)_encodedDataForIntegersCount:valueCallback:;
@end
