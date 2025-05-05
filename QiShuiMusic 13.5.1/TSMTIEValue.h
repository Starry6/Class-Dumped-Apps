@interface TSMTIEValue : NSObject
@property (nonatomic) double observationInterval;
@property (nonatomic) double mtie;
- (id)description;
- (double)observationInterval;
- (double)mtie;
- (id)initWithObservationInterval:andMTIE:;
@end
