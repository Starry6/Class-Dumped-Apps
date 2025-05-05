@interface PGBackgroundPIPAuthorization : NSObject
@property (nonatomic) @? stateTransitionHandler;
@property (nonatomic) q state;
@property (nonatomic) NSString activitySessionIdentifier;
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transitionToState:;
- (void)dealloc;
- (id)activitySessionIdentifier;
- (id)appBundleIdentifier;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
- (void)_transitionToState:;
- (void)revoke;
- (id)initWithActivitySessionIdentifier:appBundleIdentifier:stateTransitionHandler:;
- (id)stateTransitionHandler;
@end
