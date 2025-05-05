@interface DMFFetchUsersResultObject : CATTaskResultObject
@property (nonatomic) NSArray users;
- (id)users;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUsers:;
+ (BOOL)supportsSecureCoding;
@end
