@interface LNBundleActionsMetadata : NSObject
@property (nonatomic) NSDictionary actions;
@property (nonatomic) NSDictionary systemProtocolDefaults;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithActions:systemProtocolDefaults:;
- (id)systemProtocolDefaults;
+ (BOOL)supportsSecureCoding;
@end
