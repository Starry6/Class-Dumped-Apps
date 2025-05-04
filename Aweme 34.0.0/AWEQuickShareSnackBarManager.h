@interface AWEQuickShareSnackBarManager : NSObject
@property (nonatomic) <AWEShareToStoryModelProtocol> storyModel;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) AWEAwemeModel previousAweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (id)trackParams;
- (void)setTrackParams:;
- (id)previousAwemeWithCreationID:;
- (void)snackBarEditButtonDidClickWithStoryModel:;
- (void)snackBarDismissDueToTimeOutWithStoryModel:;
- (void)snackBarDismissDueToTouchSpaceWithStoryModel:;
- (void)setPreviousAweme:;
- (id)previousAweme;
- (void)showSnackBarWithStoryModel:trackParams:;
- (void).cxx_destruct;
- (void)setStoryModel:;
- (id)storyModel;
+ (id)sharedManager;
@end
