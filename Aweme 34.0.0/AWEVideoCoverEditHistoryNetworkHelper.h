@interface AWEVideoCoverEditHistoryNetworkHelper : NSObject
+ (void)uploadHistoryTemplateId:userSetting:isLandscape:isVideoImageOpt:pannelName:completion:;
+ (void)fetchHistoryTemplateListWithIsLandscape:isVideoImageOpt:completion:;
+ (id)get:params:modelClass:completion:;
+ (id)post:params:modelClass:completion:;
+ (void)fetchHistoryTextTemplateListWithPannelName:completion:;
@end
