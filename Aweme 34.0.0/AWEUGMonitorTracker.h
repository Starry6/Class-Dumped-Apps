@interface AWEUGMonitorTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)monitorService:status:level:errorCode:errorDesc:extraInfo:;
@end
