@interface AFApplicationContext : NSObject
@property (nonatomic) NSString associatedBundleIdentifier;
@property (nonatomic) AFBulletin bulletin;
@property (nonatomic) AceObject aceContext;
@property (nonatomic) NSDictionary contextDictionary;
@property (nonatomic) NSArray aceContexts;
- (id)init;
- (id)associatedBundleIdentifier;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (id)contextDictionary;
- (void)encodeWithCoder:;
- (id)bulletin;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAssociatedBundleIdentifier:bulletin:aceContext:contextDictionary:aceContexts:;
- (id)aceContext;
- (id)aceContexts;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
