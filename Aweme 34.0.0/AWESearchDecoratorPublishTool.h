@interface AWESearchDecoratorPublishTool : NSObject
+ (BOOL)checkIsAwemeModelAsPublishMocked:;
+ (id)getTemplateMvInfoFromAwemeModel:;
+ (BOOL)checkIsAwemeModelAsPublishMockedInnerFlow:;
+ (void)markAwemeModelAsPublishMocked:;
+ (void)markAwemeModelAsPublishMockedInnerFlow:;
@end
