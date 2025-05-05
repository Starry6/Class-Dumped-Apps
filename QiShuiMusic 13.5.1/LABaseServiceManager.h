@interface LABaseServiceManager : LABaseService
@property (nonatomic) Q sessionsCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)bootstrapSessionServiceType:clientID:clientConnection:completionHandler:;
- (void)bootstrapSessionServiceType:clientID:completionHandler:;
- (void)shutdownSessionsWithMatchingID:;
- (unsigned long long)sessionsCount;
- (void)_shutdownSessionsWithServiceType:;
- (BOOL)allowsMultipleClientsForServiceType:;
- (void)bootstrapServiceWithType:clientConnection:completionHandler:;
+ (id)exportedInterface;
@end
