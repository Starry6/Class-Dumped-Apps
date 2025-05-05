@interface BDUGMonitorImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackService:attributes:;
- (void)trackService:metric:category:extra:;
@end
