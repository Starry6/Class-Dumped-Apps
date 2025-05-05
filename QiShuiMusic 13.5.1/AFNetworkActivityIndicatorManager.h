@interface AFNetworkActivityIndicatorManager : NSObject
@property (nonatomic) q activityCount;
@property (nonatomic) NSTimer activityIndicatorVisibilityTimer;
@property (nonatomic) BOOL networkActivityIndicatorVisible;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL isNetworkActivityIndicatorVisible;
- (id)activityIndicatorVisibilityTimer;
- (void)decrementActivityCount;
- (void)incrementActivityCount;
- (void)networkRequestDidFinish:;
- (void)networkRequestDidStart:;
- (void)setActivityCount:;
- (void)setActivityIndicatorVisibilityTimer:;
- (void)updateNetworkActivityIndicatorVisibility;
- (void)updateNetworkActivityIndicatorVisibilityDelayed;
- (id)init;
- (void)dealloc;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (BOOL)isNetworkActivityIndicatorVisible;
- (long long)activityCount;
+ (id)keyPathsForValuesAffectingIsNetworkActivityIndicatorVisible;
+ (id)sharedManager;
@end
