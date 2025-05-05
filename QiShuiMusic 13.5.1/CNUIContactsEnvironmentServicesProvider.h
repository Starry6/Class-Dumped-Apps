@interface CNUIContactsEnvironmentServicesProvider : NSObject
+ (id)capabilities;
+ (id)suggestionsService;
+ (id)defaultUserActionFetcher;
+ (id)applicationWorkspace;
+ (id)recentsManagerWithSchedulerProvider:;
+ (id)idsIDQueryControllerWrapper;
@end
