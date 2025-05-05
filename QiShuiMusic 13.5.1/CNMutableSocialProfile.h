@interface CNMutableSocialProfile : CNSocialProfile
@property (nonatomic) NSString urlString;
@property (nonatomic) NSString username;
@property (nonatomic) NSString userIdentifier;
@property (nonatomic) NSString service;
@property (nonatomic) NSString displayname;
@property (nonatomic) NSArray bundleIdentifiers;
@property (nonatomic) NSString teamIdentifier;
- (id)freeze;
- (id)copyWithZone:;
@end
