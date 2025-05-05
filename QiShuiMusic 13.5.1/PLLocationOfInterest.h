@interface PLLocationOfInterest : NSObject
@property (nonatomic) NSMutableArray visits;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) q type;
@property (nonatomic) double typeRadius;
@property (nonatomic) PLLocationOfInterestLocation routineLocation;
@property (nonatomic) PLLocationOfInterestLocation mapItemLocation;
- (void)setVisits:;
- (id)identifier;
- (id)visits;
- (unsigned long long)hash;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (double)distanceFromLocation:;
- (BOOL)isEqual:;
- (id)initWithIdentifier:locationOfInterestType:typeRadius:routineLocation:mapItemLocation:;
- (void)addVisit:;
- (void)removeVisit:;
- (double)centerDistanceFromLocation:;
- (double)typeRadius;
- (id)routineLocation;
- (id)mapItemLocation;
@end
