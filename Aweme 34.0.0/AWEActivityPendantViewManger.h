@interface AWEActivityPendantViewManger : NSObject
@property (nonatomic) NSMutableArray allPenantViews;
@property (nonatomic) Q currentState;
- (void)switchPendantViewState:animated:;
- (void)showCapsuleMessage:;
- (void)registerPendantView:;
- (id)allPenantViews;
- (void)hideAllPendant;
- (void)setAllPenantViews:;
- (void)setCurrentState:;
- (unsigned long long)currentState;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
