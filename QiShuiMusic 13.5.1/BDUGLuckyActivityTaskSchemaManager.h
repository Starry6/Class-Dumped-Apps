@interface BDUGLuckyActivityTaskSchemaManager : NSObject
- (void)registerAscribeSchema;
+ (void)preStartupUnionSchemaModule;
+ (id)sharedInstance;
@end
