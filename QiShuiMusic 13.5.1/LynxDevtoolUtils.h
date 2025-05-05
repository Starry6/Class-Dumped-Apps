@interface LynxDevtoolUtils : NSObject
+ (BOOL)getDevtoolEnv:withDefaultValue:;
+ (id)getDevtoolEnvInstance;
+ (id)getDevtoolEnvWithGroupName:;
+ (void)setDevtoolEnv:forGroup:;
+ (void)setDevtoolEnv:forKey:;
@end
