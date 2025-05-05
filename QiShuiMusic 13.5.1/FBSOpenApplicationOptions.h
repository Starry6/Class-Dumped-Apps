@interface FBSOpenApplicationOptions : NSObject
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) NSURL url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dictionary;
- (id)url;
- (void)encodeWithXPCDictionary:;
- (void)setDictionary:;
- (id)initWithBSXPCCoder:;
- (id)succinctDescriptionBuilder;
- (void)_updateOption:forKey:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)succinctDescription;
- (id)description;
- (void)_sanitizeAndValidatePayload;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (id)optionsWithDictionary:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
