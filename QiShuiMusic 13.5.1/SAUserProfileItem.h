@interface SAUserProfileItem : AceObject
@property (nonatomic) BOOL activeProfile;
@property (nonatomic) NSString fullName;
@property (nonatomic) NSString profileIdentifier;
@property (nonatomic) NSData profileImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fullName;
- (void)setProfileIdentifier:;
- (id)profileIdentifier;
- (id)groupIdentifier;
- (BOOL)activeProfile;
- (void)setFullName:;
- (id)encodedClassName;
- (void)setActiveProfile:;
- (id)profileImage;
- (void)setProfileImage:;
@end
