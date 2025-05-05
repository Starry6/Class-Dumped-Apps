@interface DMFFetchProfilesResultObject : CATTaskResultObject
@property (nonatomic) NSArray profiles;
- (id)initWithProfiles:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)profiles;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
