@interface AWEIMTrackerService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iesim_getInstallID;
- (void)iesim_trackEvent:params:;
@end
