@interface STLocationSharingModificationClient : NSObject
@property (nonatomic) STManagementState managementState;
- (id)init;
- (void).cxx_destruct;
- (id)managementState;
- (void)isLocationSharingModificationAllowedForUserID:completionHandler:;
- (void)setLocationSharingModificationAllowed:forUserID:completionHandler:;
@end
