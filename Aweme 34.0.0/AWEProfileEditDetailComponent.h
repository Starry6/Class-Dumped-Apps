@interface AWEProfileEditDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) BOOL showProfileCompletedAnimation;
- (float)completionPercent;
- (id)profileHeaderVC;
- (BOOL)showProfileCompletedAnimation;
- (void)setShowProfileCompletedAnimation:;
- (void)didCompleteProfileInfo;
- (void)onDidRequestUser:error:;
- (void)onEditCommit:;
- (void)updateCompletionPercent;
- (void)dealloc;
- (void)viewDidAppear;
- (void)onInit;
@end
