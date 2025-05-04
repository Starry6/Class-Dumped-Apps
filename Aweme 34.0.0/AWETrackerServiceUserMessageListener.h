@interface AWETrackerServiceUserMessageListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
+ (void)dataIRISSetupUserIdentifiers;
+ (id)sharedInstance;
@end
