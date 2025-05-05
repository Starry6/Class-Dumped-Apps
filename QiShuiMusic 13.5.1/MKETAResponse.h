@interface MKETAResponse : NSObject
@property (nonatomic) NSDate expectedArrivalDate;
@property (nonatomic) NSDate expectedDepartureDate;
@property (nonatomic) NSArray sortedETAs;
@property (nonatomic) MKMapItem source;
@property (nonatomic) MKMapItem destination;
@property (nonatomic) double expectedTravelTime;
@property (nonatomic) double distance;
@property (nonatomic) Q transportType;
- (double)distance;
- (unsigned long long)transportType;
- (id)destination;
- (void).cxx_destruct;
- (id)source;
- (id)description;
- (id)_sortedETAs;
- (double)expectedTravelTime;
- (id)initWithSource:destination:expectedTravelTime:distance:sortedETAs:;
- (unsigned long long)_transportType:;
- (id)expectedArrivalDate;
- (void)setExpectedArrivalDate:;
- (id)expectedDepartureDate;
- (void)setExpectedDepartureDate:;
@end
