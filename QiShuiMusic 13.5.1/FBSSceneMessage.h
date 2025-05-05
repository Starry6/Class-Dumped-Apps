@interface FBSSceneMessage : NSObject
@property (nonatomic) BSMutableKeyedSettings payload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)payload;
- (id)init;
- (Class)fallbackXPCEncodableClass;
- (void)encodeWithXPCDictionary:;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)_initWithPayload:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (id)message;
@end
