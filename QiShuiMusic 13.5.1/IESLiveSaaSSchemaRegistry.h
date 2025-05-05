@interface IESLiveSaaSSchemaRegistry : NSObject
+ (id)registeredHosts;
+ (void)loadSchemasIfNeeded;
+ (Class)parserClassFromHost:;
@end
