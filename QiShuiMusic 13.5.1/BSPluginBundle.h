@interface BSPluginBundle : NSObject
@property (nonatomic) BOOL valid;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL loaded;
@property (nonatomic) # principalClass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (id)succinctDescriptionBuilder;
- (BOOL)loadPlugin:;
- (id)type;
- (Class)principalClass;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isLoaded;
- (id)succinctDescription;
- (id)description;
- (BOOL)loadPlugin;
- (id)name;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
@end
