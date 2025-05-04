@interface AWEStudioChallengeUtils : NSObject
+ (void)fetchChallengeModelWtihChallengeId:isCommerce:orHashtagName:completion:;
+ (void)fetchChallengeModelWtihChallengeId:isCommerce:orHashtagName:showErrTips:completion:;
+ (void)onReceiveChallengeModel:error:completion:showErrTips:;
@end
