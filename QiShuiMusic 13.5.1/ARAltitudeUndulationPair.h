@interface ARAltitudeUndulationPair : NSObject
@property (nonatomic) double altitude;
@property (nonatomic) double undulation;
@property (nonatomic) BOOL lookupFailed;
@property (nonatomic) q source;
- (double)altitude;
- (double)undulation;
- (long long)source;
- (id)initWithAltitude:undulation:lookupFailed:source:;
- (BOOL)lookupFailed;
@end
