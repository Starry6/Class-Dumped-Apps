@interface GEOMapAccessRoad : GEOMapAccessLine
@property (nonatomic) NSInteger roadClass;
@property (nonatomic) NSInteger formOfWay;
@property (nonatomic) NSInteger travelDirection;
@property (nonatomic) double roadWidth;
@property (nonatomic) Q speedLimit;
@property (nonatomic) BOOL speedLimitIsMPH;
@property (nonatomic) Q roadID;
@property (nonatomic) BOOL isTunnel;
@property (nonatomic) BOOL isBridge;
@property (nonatomic) BOOL isRail;
@property (nonatomic) NSInteger rampType;
@property (nonatomic) NSString internalRoadName;
@property (nonatomic) Q coordinateCount;
@property (nonatomic) ^{?=dd} coordinates;
@property (nonatomic) double length;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)speedLimit;
- (BOOL)speedLimitIsMPH;
- (int)roadClass;
- (int)rampType;
- (void).cxx_destruct;
- (id)description;
- (int)formOfWay;
- (int)travelDirection;
- (double)roadWidth;
- (id).cxx_construct;
- (unsigned long long)roadID;
- (BOOL)isTunnel;
- (BOOL)isBridge;
- (BOOL)isRail;
- (id)internalRoadName;
- (void)roadFeaturesWithHandler:;
- (void)roadEdgesWithHandler:;
- (id)findRoadsFrom:completionHandler:;
- (id)findRoadsFromPreviousIntersection:completionHandler:;
- (id)findRoadsToPreviousIntersection:completionHandler:;
- (id)findRoadsFromNextIntersection:completionHandler:;
- (id)findRoadsToNextIntersection:completionHandler:;
- (id)initWithMap:roadEdge:;
- (id)tileKeys;
+ (double)estimatedWidthForRoad:;
@end
