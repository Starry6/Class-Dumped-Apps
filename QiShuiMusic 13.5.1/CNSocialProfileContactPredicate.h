@interface CNSocialProfileContactPredicate : CNPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) CNSocialProfile socialProfile;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)sgContactMatchesWithSortOrder:mutableObjects:service:error:;
- (id)initWithSocialProfile:;
- (id)socialProfile;
+ (BOOL)supportsSecureCoding;
@end
