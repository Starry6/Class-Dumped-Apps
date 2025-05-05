@interface AFSiriPhoneticContactNames : NSObject
@property (nonatomic) NSString givenName;
@property (nonatomic) NSString middleName;
@property (nonatomic) NSString familyName;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString organizationName;
@property (nonatomic) NSString languageCode;
- (id)givenName;
- (void)setFamilyName:;
- (void)setLanguageCode:;
- (id)languageCode;
- (id)familyName;
- (void)setGivenName:;
- (id)middleName;
- (id)nickname;
- (void)setOrganizationName:;
- (void).cxx_destruct;
- (id)spokenName;
- (void)setNickname:;
- (id)organizationName;
- (void)setMiddleName:;
@end
