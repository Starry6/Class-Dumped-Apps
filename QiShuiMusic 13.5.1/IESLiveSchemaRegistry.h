@interface IESLiveSchemaRegistry : NSObject
+ (id)registeredHosts;
+ (void)loadSchemasIfNeeded;
+ (Class)parserClassFromHost:;
+ (id)schemaDictAllKeys;
+ (Class)schemaDictValueForKey:;
+ (Class)schemaModelDictValueForKey:;
+ (Class)schemeModelForHost:;
+ (void)setupSchemaDataIfNeeded;
@end
