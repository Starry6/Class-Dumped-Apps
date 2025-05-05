@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject
@property (nonatomic) BOOL isCurrentUserAdmin;
@property (nonatomic) double refreshPeriod;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)getAdminStatusAndWaitWithOptions:resultBlock:;
- (void)getAdminStatusWithOptions:resultBlock:;
- (BOOL)isCurrentUserAdmin;
- (id)_adminStatusForAccountID:;
- (void)_setAdminStatus:forAccountID:;
- (BOOL)_statusIsFresh:;
- (double)refreshPeriod;
- (void)setRefreshPeriod:;
+ (id)sharedCoordinator;
@end
