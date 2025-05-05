@interface CNFoundationSocialProfile : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) NSString username;
@property (nonatomic) NSString userIdentifier;
@property (nonatomic) NSString service;
@property (nonatomic) NSString displayName;
- (id)urlString;
- (id)username;
- (BOOL)isEmpty;
- (id)userIdentifier;
- (unsigned long long)hash;
- (id)service;
- (id)displayName;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithUrlString:username:userIdentifier:service:displayName:;
+ (id)emptySocialProfile;
@end
