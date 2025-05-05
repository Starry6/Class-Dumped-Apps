@interface DMFFetchControlGroupIdentifiersRequest : DMFTaskRequest
@property (nonatomic) NSString leaderIdentifier;
@property (nonatomic) BOOL includeTemporary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)leaderIdentifier;
- (void)setLeaderIdentifier:;
- (BOOL)includeTemporary;
- (void)setIncludeTemporary:;
+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
@end
