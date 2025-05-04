@interface AWEFeedCreationMigrationCardConfig : NSObject
+ (BOOL)enableCardMigrationWithFeedType:;
+ (id)cardControllerClassesNeedRegisterWithFeedType:;
+ (id)migrationConfigForFeedType:;
@end
