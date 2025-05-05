@interface BDUGLuckyDogUnionSchemaManager : NSObject
- (void)registerAscribeSchema;
+ (void)preStartupUnionSchemaModule;
+ (id)sharedInstance;
@end
