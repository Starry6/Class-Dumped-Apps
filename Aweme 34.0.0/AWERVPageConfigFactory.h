@interface AWERVPageConfigFactory : NSObject
+ (id)createPageConfig:params:;
+ (id)mediumVideoPageConfigWithParams:;
+ (id)longVideoPageConfigWithParams:;
+ (id)knowledgePageConfigWithParams:;
+ (id)defaultPageConfigWithParams:;
@end
