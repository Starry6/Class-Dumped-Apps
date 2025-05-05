@interface STXBridge.XBridgeAccountImp : NSObject
- (id)avatarURLString;
- (id)boundPhone;
- (BOOL)hasLoggedIn;
- (void)loginWithParamModel:completionHandler:;
- (void)logoutWithParamModel:completionHandler:;
- (id)secureUserID;
- (id)userID;
- (id)init;
- (id)uniqueID;
- (id)nickname;
@end
