@interface STUserDescription : NSObject
@property (nonatomic) NSString givenName;
@property (nonatomic) NSString familyName;
@property (nonatomic) NSNumber userDSID;
@property (nonatomic) NSString userAltDSID;
- (id)givenName;
- (id)userDSID;
- (id)familyName;
- (id)initWithGivenName:familyName:userDSID:userAltDSID:;
- (void).cxx_destruct;
- (id)userAltDSID;
+ (id)currentUser;
+ (void)currentUserWithCompletion:;
@end
