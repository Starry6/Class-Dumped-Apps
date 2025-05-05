@interface LAADMUser : NSObject
@property (nonatomic) BOOL isAdministrator;
@property (nonatomic) BOOL isDirectAdministrator;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString name;
@property (nonatomic) NSString fullName;
@property (nonatomic) q userID;
- (id)fullName;
- (long long)userID;
- (BOOL)isAdministrator;
- (void).cxx_destruct;
- (id)groupName;
- (id)name;
- (BOOL)isMemberOfGroupWithName:;
- (BOOL)isDirectAdministrator;
+ (id)currentUser;
+ (id)allLocalUsers;
+ (id)rootUser;
+ (id)findUserByID:searchParent:;
+ (id)findUserByName:searchParent:;
+ (BOOL)isUserNameUnique:searchParent:;
+ (BOOL)shouldDisplayUser:;
+ (id)namesFromUsersWithUIDs:;
+ (id)namesFromUsersWithUIDs:presentInGroupWithName:;
@end
