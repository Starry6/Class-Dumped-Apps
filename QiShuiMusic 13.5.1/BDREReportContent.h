@interface BDREReportContent : NSObject
@property (nonatomic) NSDictionary metric;
@property (nonatomic) NSDictionary category;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithMetric:category:extra:;
- (void)setExtra:;
- (id)extra;
- (void)setCategory:;
- (void).cxx_destruct;
- (void)setMetric:;
- (id)metric;
- (id)category;
@end
