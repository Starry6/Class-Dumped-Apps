@interface MPAVBatteryLevel : NSObject
@property (nonatomic) NSNumber leftPercentage;
@property (nonatomic) NSNumber rightPercentage;
@property (nonatomic) NSNumber singlePercentage;
@property (nonatomic) NSNumber casePercentage;
- (id)initWithOutputDevice:;
- (id)casePercentage;
- (id)rightPercentage;
- (id)leftPercentage;
- (id)singlePercentage;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRouteDescription:;
- (BOOL)isEqual:;
@end
