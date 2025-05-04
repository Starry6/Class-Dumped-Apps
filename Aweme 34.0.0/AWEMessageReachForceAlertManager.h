@interface AWEMessageReachForceAlertManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)triggerAccessForceAlert:withEvent:completion:;
@end
