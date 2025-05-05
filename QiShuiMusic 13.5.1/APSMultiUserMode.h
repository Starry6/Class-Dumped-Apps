@interface APSMultiUserMode : NSObject
@property (nonatomic) BOOL isMultiUser;
@property (nonatomic) BOOL isLoggedInUser;
- (BOOL)isLoggedInUser;
- (BOOL)isMultiAndLoggedIn;
- (BOOL)isMultiUser;
- (id)initWithIsMultiUserMode:loggedInUser:;
+ (id)sharedInstance;
+ (BOOL)_getMultiUserMode;
+ (BOOL)_getIsCurrentlyLoggedIn;
@end
