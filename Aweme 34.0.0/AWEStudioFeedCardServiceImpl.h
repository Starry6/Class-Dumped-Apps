@interface AWEStudioFeedCardServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableCardMigrationWithFeedType:;
- (id)cardControllerClassesNeedRegisterWithFeedType:;
- (id)migrationConfigForFeedType:;
@end
