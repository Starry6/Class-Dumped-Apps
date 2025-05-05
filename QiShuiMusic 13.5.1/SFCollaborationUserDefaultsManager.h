@interface SFCollaborationUserDefaultsManager : NSObject
+ (void)requestCollaborativeModeForContentIdentifier:completionHandler:;
+ (void)saveCollaborativeMode:forContentIdentifier:;
+ (id)_createRemoteDataProxyWithErrorHandler:;
@end
