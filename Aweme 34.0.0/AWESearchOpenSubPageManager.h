@interface AWESearchOpenSubPageManager : NSObject
+ (id)doPreProcessWithSchemaModel:extraParams:;
+ (id)subPageTypeWithSchemaModel:;
+ (id)generateSubPageActionWithSubPageType:;
+ (id)subPageSchemaWithSchemaModel:;
+ (void)jumpToSubPageWithSchemaModel:extraParams:completion:;
@end
