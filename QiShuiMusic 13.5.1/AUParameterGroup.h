@interface AUParameterGroup : AUParameterNode
@property (nonatomic) NSMutableDictionary childIndicesByIdentifier;
@property (nonatomic) NSArray children;
@property (nonatomic) NSArray allParameters;
- (id)valueForKey:;
- (id)initWithChildren:;
- (void)dealloc;
- (BOOL)isGroup;
- (id)initWithCoder:;
- (id)children;
- (id)copyNodeWithOffset:;
- (void)_indexChildren;
- (void)encodeWithCoder:;
- (void)_serialize:;
- (id)allParameters;
- (id)childIndicesByIdentifier;
- (id)initWithID:name:children:;
- (void)_observersChanged:deltaCount:;
- (id)initWithTemplate:identifier:name:addressOffset:;
- (void).cxx_destruct;
- (void)_deserialize:fromSetFullState:;
- (void)setChildIndicesByIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
