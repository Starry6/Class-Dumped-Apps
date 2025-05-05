@interface TSMADEVValue : NSObject
@property (nonatomic) double observationInterval;
@property (nonatomic) double madev;
- (id)description;
- (double)observationInterval;
- (double)madev;
- (id)initWithObservationInterval:andMADEV:;
@end
