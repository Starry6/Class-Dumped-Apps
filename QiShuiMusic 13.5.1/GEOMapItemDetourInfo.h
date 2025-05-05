@interface GEOMapItemDetourInfo : NSObject
@property (nonatomic) GEOPDResultDetourInfo detourInfo;
@property (nonatomic) double detourTime;
@property (nonatomic) double timeToPlace;
@property (nonatomic) double detourDistance;
@property (nonatomic) double distanceToPlace;
@property (nonatomic) NSData detourInfoAsData;
- (id)init;
- (void).cxx_destruct;
- (double)detourTime;
- (double)timeToPlace;
- (double)detourDistance;
- (double)distanceToPlace;
- (id)_detourInfo;
- (id)initWithResultDetourInfo:;
- (id)detourInfoAsData;
@end
