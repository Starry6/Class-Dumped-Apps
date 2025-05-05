@interface SBSBackgroundContentDefinition : NSObject
@property (nonatomic) NSString sceneIdentifier;
@property (nonatomic) NSString clientBundleIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientBundleIdentifier;
- (id)init;
- (void)encodeWithXPCDictionary:;
- (id)sceneIdentifier;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)initWithSceneIdentifier:clientBundleIdentifier:;
@end
