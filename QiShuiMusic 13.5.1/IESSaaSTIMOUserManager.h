@interface IESSaaSTIMOUserManager : NSObject
- (void)fetchBlockListUsersInInbox:cursor:limit:completion:;
- (void)fetchUserBlockStatusInInbox:userID:completion:;
- (void)fetchUserInfoInInbox:userID:complete:;
- (void)modifyUsers:toBlockList:inbox:completion:;
@end
