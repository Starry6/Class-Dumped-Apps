@interface GEORoutePreloaderStatistics : NSObject
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) q transportType;
@property (nonatomic) Q tilesPreloaded;
@property (nonatomic) Q tilesUsed;
@property (nonatomic) Q tilesMissed;
- (id)dateInterval;
- (void)setTransportType:;
- (long long)transportType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithDateInterval:transportType:tilesPreloaded:tilesUsed:tilesMissed:;
- (unsigned long long)tilesPreloaded;
- (void)setTilesPreloaded:;
- (unsigned long long)tilesUsed;
- (void)setTilesUsed:;
- (unsigned long long)tilesMissed;
- (void)setTilesMissed:;
+ (BOOL)supportsSecureCoding;
@end
