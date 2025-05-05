@interface DMFFetchLastLoginDateRequest : DMFTaskRequest
@property (nonatomic) NSSet appleIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)appleIDs;
- (void)setAppleIDs:;
+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
@end
