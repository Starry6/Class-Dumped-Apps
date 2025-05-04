@interface AWECoCreatorDataController : NSObject
+ (void)configureCoCreatorExternModelWithModel:;
+ (id)creatAuthorWithModel:;
+ (void)requestAwemeListWithModel:completion:;
+ (void)requestAwemeCountWithModel:completion:;
+ (void)trackPrefetchCocreatorPost;
+ (void)configureVerifyInfoWithModel:veriryInfoDict:;
+ (void)requestVerificationWithSecUserIDs:completion:;
+ (BOOL)prelodCoCreatorInfoWithModel:currentTime:;
+ (void)requestCoCreatorInfoWithModel:coCreatorModel:requestVerifyInfo:completion:;
+ (void)requestUserIsInCoCreatorListWithModel:completion:;
@end
