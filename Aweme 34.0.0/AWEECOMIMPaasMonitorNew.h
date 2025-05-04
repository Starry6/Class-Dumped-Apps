@interface AWEECOMIMPaasMonitorNew : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackService:metric:category:extra:immediately:;
@end
