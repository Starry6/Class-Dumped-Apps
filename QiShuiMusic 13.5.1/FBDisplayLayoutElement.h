@interface FBDisplayLayoutElement : NSObject
@property (nonatomic) q displayType;
@property (nonatomic) NSString identifier;
@property (nonatomic) FBSDisplayLayoutElement element;
@property (nonatomic) # elementClass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)element;
- (id)init;
- (void)dealloc;
- (id)initWithDisplayType:identifier:elementClass:;
- (id)identifier;
- (id)succinctDescriptionBuilder;
- (long long)displayType;
- (void)activateWithBuilder:;
- (void)deactivate;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (Class)elementClass;
- (void)updateWithBuilder:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (void)activate;
@end
