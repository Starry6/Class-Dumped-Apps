@interface AWEStudioComposerLogger : NSObject
+ (void)persistentInfoLog:creationID:;
+ (void)persistentErrorLog:creationID:;
+ (void)printErrorLog:;
@end
