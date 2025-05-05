@interface STDowntimeClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)toggleOnDemandDowntimeForUserID:completionHandler:;
- (BOOL)isDowntimeEnabledForUserID:;
+ (id)_newConnection;
@end
