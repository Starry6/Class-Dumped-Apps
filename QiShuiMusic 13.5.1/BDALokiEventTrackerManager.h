@interface BDALokiEventTrackerManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventV3:params:isDoubleSending:;
- (void)eventData:;
- (void)performanceEventV3:params:;
+ (id)protocolImp;
+ (id)sharedInstance;
@end
