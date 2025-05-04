@interface AWECommentWithMultiMediaHandler : NSObject
+ (void)generateStudioComment:configData:trackInfo:completion:;
+ (void)createCommentWithParamsModel:trackInfo:effectModel:didEditBlock:completion:;
+ (id)generateCustomTrakInfoFromParamsModel:trackInfo:;
+ (id)generateCommonTrakInfoFromParamsModel:trackInfo:;
+ (void)createCommentWithParamsModel:trackInfo:didEditBlock:completion:;
@end
