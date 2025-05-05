@interface BKSHIDEventKeyCommandsRegistration : NSObject
@property (nonatomic) BKSHIDEventDeferringEnvironment deferringEnvironment;
@property (nonatomic) BKSHIDEventDeferringToken deferringToken;
@property (nonatomic) NSSet keyCommands;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deferringEnvironment;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)keyCommands;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)deferringToken;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
- (id)_initWithEnvironment:token:keyCommands:;
+ (BOOL)supportsSecureCoding;
@end
