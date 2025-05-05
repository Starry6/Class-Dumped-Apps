@interface CPAnalyticsMetricEventRoute : NSObject
@property (nonatomic) NSString destination;
@property (nonatomic) NSString destinationEventKey;
@property (nonatomic) NSArray propertiesToInclude;
- (id)initWithConfig:;
- (id)destination;
- (id)destinationEventKey;
- (void).cxx_destruct;
- (id)propertiesToInclude;
@end
