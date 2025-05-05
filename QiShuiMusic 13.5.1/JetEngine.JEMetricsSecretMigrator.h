@interface JetEngine.JEMetricsSecretMigrator : NSObject
- (id)init;
+ (void)migrateSecretIfNecessaryAndReturnSecretValueWithNamespace:topic:secretKey:configuration:secretCompletionHandler:;
@end
