@interface TSRMSTIEValue : NSObject
@property (nonatomic) double observationInterval;
@property (nonatomic) double rmstie;
- (id)description;
- (double)observationInterval;
- (double)rmstie;
- (id)initWithObservationInterval:andRMSTIE:;
@end
