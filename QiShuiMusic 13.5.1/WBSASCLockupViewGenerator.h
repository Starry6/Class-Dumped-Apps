@interface WBSASCLockupViewGenerator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)presentingViewControllerForLockupView:;
- (void)lockupViewDidBeginRequest:;
- (void)lockupViewDidFinishRequest:;
- (void)lockupView:didFailRequestWithError:;
- (void)generateLockupViewsForAvailableApps:completionHandler:;
- (void)_lockupViewRequestedCompleted:loadedSuccessfully:;
- (void)_allLockupViewRequestsCompleted;
+ (id)sharedGenerator;
+ (id)lockupViewGroup;
@end
