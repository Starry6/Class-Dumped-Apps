@interface AWEProductDetectFlow : NSObject
@property (nonatomic) AWEProductDetectRequestTaskCenter taskCenter;
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (id)taskCenter;
- (void)setTaskCenter:;
- (void)requestProductDetectInfoWithCompletion:;
- (BOOL)checkProductDetectEnabledWithToastInfo:;
- (BOOL)checkHasProductDetectAbility;
- (BOOL)checkProductDetectEnabled;
- (BOOL)checkProductDetectToggleState;
- (void)showProductDetectPostCheckErrorAlertWithTitle:popType:completion:;
- (void)requestProductDetectPostWithCompletion:;
- (void)checkProductDetectPublishWithCompletion:;
- (void)requestProductDetectPostCancelWithCompletion:;
- (id)init;
- (void).cxx_destruct;
+ (id)flowWithModel:;
+ (void)requestProductDetectPost:key:completion:;
+ (void)p_post:params:key:callback:;
+ (void)requestProductDetectPostCancelWithToken:completion:;
@end
