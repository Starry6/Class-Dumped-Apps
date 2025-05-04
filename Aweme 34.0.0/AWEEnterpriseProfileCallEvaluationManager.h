@interface AWEEnterpriseProfileCallEvaluationManager : NSObject
+ (BOOL)shouldShowCallEvaluationBottomViewWithUserModel:;
+ (id)callEvaluationBottomViewWithUserModel:;
+ (void)recordCallEvaluationContent:;
+ (void)notifyCallEvaluationBottomViewShowWithUserModel:;
+ (id)callEvaluationModelWithUserModel:;
+ (id)storageKeyWithToUserID:;
+ (BOOL)checkIsValid:withUserModel:;
@end
