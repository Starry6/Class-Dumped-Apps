@interface BSSettingsDiff : NSObject
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) <BSSettingDescriptionProvider> descriptionProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (void)encodeWithXPCDictionary:;
- (void)setDescriptionProvider:;
- (id)descriptionProvider;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)applyToSettings:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (void)inspectChangesWithBlock:;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)diffFromSettings:toSettings:;
@end
