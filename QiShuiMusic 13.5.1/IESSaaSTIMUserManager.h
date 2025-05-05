@interface IESSaaSTIMUserManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchBlockListUsersInInbox:cursor:limit:completion:;
- (void)fetchUserBlockStatusInInbox:userID:completion:;
- (void)fetchUserInfoInInbox:userID:complete:;
- (void)modifyUsers:toBlockList:inbox:completion:;
- (id)init;
+ (id)sharedInstance;
@end
