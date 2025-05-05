@interface IDSHomeKitManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)serviceUserIDs:error:;
- (void)adminAccessTokens:error:;
- (void)consentTokens:error:;
- (void)userAccessTokens:error:;
- (void)refreshUserAccessTokens:error:;
- (void)getServiceUserIDsWithCompletionBlock:queue:;
- (void)getAdminAccessTokensWithWithServiceUserID:accessoryID:pairingToken:completionBlock:queue:;
- (void)getConsentTokensWithServiceUserID:accessoryIDs:adminID:completionBlock:queue:;
- (void)getUserAccessTokensWithServiceUserID:userID:userHandle:accessoryRequests:completionBlock:queue:;
- (void)refreshUserAccessTokensWithServiceUserID:userID:accessoryRequests:completionBlock:queue:;
+ (id)sharedInstance;
@end
