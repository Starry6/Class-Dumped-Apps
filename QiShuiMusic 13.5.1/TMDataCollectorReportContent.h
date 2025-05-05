@interface TMDataCollectorReportContent : NSObject
@property (nonatomic) NSDictionary metric;
@property (nonatomic) NSDictionary category;
@property (nonatomic) NSDictionary extra;
- (id)initWithMetric:category:extra:;
- (id)extra;
- (void).cxx_destruct;
- (id)metric;
- (id)category;
@end
